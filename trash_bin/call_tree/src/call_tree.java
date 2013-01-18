/*
 * HelloWorldApp.java
 *
 * Created on February 5, 2006, 6:43 PM
 *
 * To change this template, choose Tools | Template Manager
 * and open the template in the editor.
 */

//    package call_tree;
import java.io.*; 
import java.util.ArrayList;
import java.util.HashMap;
import java.util.regex.*;
import java.util.Hashtable;
import java.util.Enumeration;

class Caller {
	boolean isTop; /* Is the caller a top level caller */
	ArrayList<String> calleeArray;

	Caller() {
		calleeArray = new ArrayList<String>();
	}
}


/**
 * The HelloWorldApp class implements an application that
 * simply prints "Hello World!" to standard output.
 */
public class call_tree {
	static Hashtable<String, Caller> callerHash; /* Should no be static. */

	public call_tree() {
		System.out.println("constructor executed\n");
		callerHash = new Hashtable<String, Caller>();
	}
	static void init() {
		callerHash = new Hashtable<String, Caller>();
	}
	/**
	 * @param args the command line arguments
	 */

	public static void main(String[] args) {
		int i;
		init(); /* I don't know why this is needed. Fuck! */
		try	{

			StringBuilder substr = new StringBuilder();
			Pattern p1 = Pattern.compile("^;; Function");
			Pattern p2 = Pattern.compile("\\(.*\\)$");

			Pattern p3 = Pattern.compile("\\(call");
			Pattern p4 = Pattern.compile("\\(\".*\"\\)");
			Caller tmpCaller = new Caller(); /* Not have to initialize, but just to avoid a compiling error occurring below. */
			Matcher m1, m2;

			File dir = new File(args[0]);
			String[] files = dir.list();
			for (i = 0; i < files.length; i++) {
				//System.out.println(files[i]); 


				BufferedReader breader = new BufferedReader(new FileReader(args[0] + "//" + files[i]));
				String str = breader.readLine();
				while (str != null) {
					m1 = p1.matcher(str); /* Find the lines beginning with ;; Function */
					if (m1.find()) {
						m2 = p2.matcher(str); /* Extract the substring in () at the end of the line. In fact, it is the function name. */
						if (m2.find()) {
							substr.setLength(0);
							substr.append(str.substring(m2.start() + 1, m2.end() - 1));
							//System.out.println(substr.toString());
							if (callerHash.get(substr.toString()) == null) {
								tmpCaller = new Caller();
								tmpCaller.isTop = true;
								callerHash.put(substr.toString(), tmpCaller);
							}
							//System.out.println(substr.toString());
						}
					} else {
						m1 = p3.matcher(str); /* Lines beginning with (call */
						if (m1.find()) {
							m2 = p4.matcher(str);
							if (m2.find()) { /* Extract callee */
								substr.setLength(0);
								substr.append(str.substring(m2.start() + 2, m2.end() - 2));
								/*
								 * There may be '^' at the beginning of the callee.
								 * Though it may have special meaning, we just
								 * remove it here.
								 */
								while (substr.charAt(0) == '^')
									substr.deleteCharAt(0);
								String tmpStr = substr.toString();
								tmpCaller.calleeArray.add(tmpStr);

								Caller calleeCaller = callerHash.get(tmpStr); 
								if ( calleeCaller == null) {
									calleeCaller = new Caller();
								}
								calleeCaller.isTop = false;
								callerHash.put(tmpStr, calleeCaller);



								//System.out.println("\t" + substr.toString());
							}
						}
					}
					//System.out.println(str);
					str = breader.readLine();
				}
			}
			int debug = 1;
			if (debug == 1)
				dumpCallerHash();
			else {        		
				/* Show results. Maybe this should be made to a method of some class. */
				/*Enumeration<String> e = callerHash.keys();
        			while (e.hasMoreElements()){
        				String callerName = e.nextElement();
        				Caller caller = callerHash.get(callerName);
        				if (caller.isTop == true) {
        					showChildren(0, callerName);
        				}
        			}*/
				showChildren(0, "start_kernel");
			}

		} catch (ArrayIndexOutOfBoundsException e){
			System.out.println(e.toString());
		} catch (NullPointerException e) {
			System.out.println(e.toString());
		} catch (FileNotFoundException e) {
			System.out.println(e.toString());
		} catch (IOException e) {
			System.out.println(e.toString());
		}


		System.out.println("over");
	}

	static void showChildren(int level, String parent) {

		for (int j=0; j<level; j++)
			System.out.print("    ");
		System.out.println(parent);

		Caller caller = callerHash.get(parent);
		if (caller != null) {
			for (int i=0; i<caller.calleeArray.size(); i++) {
				String callee = caller.calleeArray.get(i);
				showChildren(++level, callee);
				--level;
			}
		}
	}
	static void dumpCallerHash() {
		Enumeration<String> e = callerHash.keys();
		while (e.hasMoreElements()){
			String callerName = e.nextElement();
			Caller caller = callerHash.get(callerName);

			if (caller.isTop == true)
				System.out.print("T ");
			else
				System.out.print("  ");

			System.out.println(callerName);

			for (int i=0; i<caller.calleeArray.size(); i++) {
				String callee = caller.calleeArray.get(i);
				System.out.print("\t");
				System.out.println(callee);
			}
		}
	}
}