/*
 * Input.h
 *
 *  Created on: 2011-2-26
 *      Author: Administrator
 */

#ifndef INPUT_H_
#define INPUT_H_
#include <string>
using namespace std;

class Input {
public:
	Input() {
		current = 0;
	}

	char lookAhead() {
		return str[current];
	}

	void getStr() {
		cin >> str;
	}

	void readAhead(void){
		current ++;
	}

	// Match single char.
	void match(const char c){
		if (str[current] == c) {
			current ++;
		} else
			error();
	}

	// Match range.
	void match(const char begin, const char end){
		if (begin <= str[current] && str[current] <= end) {
			current ++;
		} else
			error();
	}

private:
	string str;
	int current;

	void error(void)
	{
		cout << "Syntax error" << endl;
		return;//exit(1);
	}
};

#endif /* INPUT_H_ */
