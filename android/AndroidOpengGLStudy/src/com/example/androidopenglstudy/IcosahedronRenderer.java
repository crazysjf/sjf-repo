package com.example.androidopenglstudy;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;
import java.nio.ShortBuffer;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import android.opengl.GLU;
import android.opengl.GLSurfaceView.Renderer;

public class IcosahedronRenderer implements Renderer {
//		static final float[] gridVertexArray = new float[] { 
//			-1f, 0f, -1f , 
//			0.8f ,  0f, 0.8f , 
//			0.0f ,  0f, 0.8f ,  
//		};
	float[] gridVertexArray = new float[500]; 
	{	
		int i = 0;
		for (float x=-1; x<=1.01; x = x+0.1f) {
			gridVertexArray[i] = x;
			gridVertexArray[i+1] = 0;
			gridVertexArray[i+2] = -1f;
			gridVertexArray[i+3] = x;
			gridVertexArray[i+4] = 0;
			gridVertexArray[i+5] = 1f;
			i+=6;
		}
		for (float z=-1; z<=1.01; z = z+0.1f) {
			gridVertexArray[i] = -1;
			gridVertexArray[i+1] = 0;
			gridVertexArray[i+2] = z;
			gridVertexArray[i+3] = 1;
			gridVertexArray[i+4] = 0;
			gridVertexArray[i+5] = z;
			i+=6;
		}
	}
	
	static final float X=.525731112119133606f; 
	static final float Z=.850650808352039932f; 
	static float vertices[] = new float[]{ 
		-X, 0.0f, Z, X, 0.0f, Z, -X, 0.0f, -Z, X, 0.0f, -Z, 
		0.0f, Z, X, 0.0f, Z, -X, 0.0f, -Z, X, 0.0f, -Z, -X, 
		Z, X, 0.0f, -Z, X, 0.0f, Z, -X, 0.0f, -Z, -X, 0.0f 
	}; 
	static short indices[] = new short[]{ 
		0,4,1, 0,9,4, 9,5,4, 4,5,8, 4,8,1, 
		8,10,1, 8,3,10, 5,3,8, 5,2,3, 2,7,3, 
		7,10,3, 7,6,10, 7,11,6, 11,0,6, 0,1,6, 
		6,1,10, 9,0,11, 9,11,2, 9,2,5, 7,2,11 
	};
	float[] colors = { 
			0f, 0f, 0f, 1f, 
			0f, 0f, 1f, 1f, 
			0f, 1f, 0f, 1f, 
			0f, 1f, 1f, 1f, 
			1f, 0f, 0f, 1f, 
			1f, 0f, 1f, 1f, 
			1f, 1f, 0f, 1f, 
			1f, 1f, 1f, 1f, 
			1f, 0f, 0f, 1f, 
			0f, 1f, 0f, 1f, 
			0f, 0f, 1f, 1f, 
			1f, 0f, 1f, 1f 
	};
	float angle;
	private FloatBuffer gridVertexBuffer;
	private FloatBuffer vertexBuffer; 
	private FloatBuffer colorBuffer; 
	private ShortBuffer indexBuffer; 

	@Override
	public void onDrawFrame(GL10 gl) {
		gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
		gl.glClear(GL10.GL_COLOR_BUFFER_BIT	| GL10.GL_DEPTH_BUFFER_BIT); 
		gl.glColor4f(1.0f, 0.0f, 0.0f, 1.0f); 
		gl.glLoadIdentity(); 
		GLU.gluLookAt(gl, 0f, 4f,  4f, 
				0, 0, 0, 
				0, 1, 0);

		// 画网格
		gl.glEnableClientState(GL10.GL_VERTEX_ARRAY); 
		gl.glColor4f(0.5f, 0.5f, 0.5f, 1.0f); 
		gl.glVertexPointer(3, GL10.GL_FLOAT, 0, gridVertexBuffer);
		gl.glDrawArrays(GL10.GL_LINES, 0, 100); 

		gl.glRotatef(angle, 0, 1, 0); 
		gl.glFrontFace(GL10.GL_CCW); 
		gl.glEnable(GL10.GL_CULL_FACE); 
		gl.glCullFace(GL10.GL_BACK); 

		// 画二十面体
		gl.glVertexPointer(3, GL10.GL_FLOAT, 0, vertexBuffer); 
		gl.glEnableClientState(GL10.GL_COLOR_ARRAY); 
		gl.glColorPointer(4, GL10.GL_FLOAT, 0, colorBuffer); 
		gl.glDrawElements(GL10.GL_TRIANGLES, indices.length, 
				GL10.GL_UNSIGNED_SHORT, indexBuffer); 
		gl.glDisableClientState(GL10.GL_COLOR_ARRAY); 
		gl.glDisableClientState(GL10.GL_VERTEX_ARRAY); 
		gl.glDisable(GL10.GL_CULL_FACE); 

		angle++; 
	}

	@Override
	public void onSurfaceChanged(GL10 gl, int width, int height) {
		// Sets the current view port to the new size. 
		gl.glViewport(0, 0, width, height);
		//gl.glViewport(0, 0, 200, 200);
		// Select the projection matrix 
		gl.glMatrixMode(GL10.GL_PROJECTION); 
		// Reset the projection matrix 
		gl.glLoadIdentity(); 
		// Calculate the aspect ratio of the window 
		GLU.gluPerspective(gl, 45.0f, (float) width / (float) height,	0.1f, 100.0f); 
		// Select the modelview matrix 
		gl.glMatrixMode(GL10.GL_MODELVIEW); 
		// Reset the modelview matrix 
		gl.glLoadIdentity(); 
	}

	@Override
	public void onSurfaceCreated(GL10 gl, EGLConfig config) {
		// Set the background color to black ( rgba ).  
		gl.glClearColor(0.0f, 0.0f, 0.0f, 0.5f); 
		// Enable Smooth Shading, default not really needed. 
		gl.glShadeModel(GL10.GL_SMOOTH); 
		// Depth buffer setup. 
		gl.glClearDepthf(1.0f); 
		// Enables depth testing. 
		gl.glEnable(GL10.GL_DEPTH_TEST); 
		// The type of depth testing to do. 
		gl.glDepthFunc(GL10.GL_LEQUAL); 
		// Really nice perspective calculations. 
		gl.glHint(GL10.GL_PERSPECTIVE_CORRECTION_HINT, 
				GL10.GL_NICEST); 

		ByteBuffer gridVbb 
		= ByteBuffer.allocateDirect(gridVertexArray.length * 4); 
		gridVbb.order(ByteOrder.nativeOrder()); 
		gridVertexBuffer = gridVbb.asFloatBuffer(); 
		gridVertexBuffer.put(gridVertexArray); 
		gridVertexBuffer.position(0);

		ByteBuffer vbb 
		= ByteBuffer.allocateDirect(vertices.length * 4); 
		vbb.order(ByteOrder.nativeOrder()); 
		vertexBuffer = vbb.asFloatBuffer(); 
		vertexBuffer.put(vertices); 
		vertexBuffer.position(0); 
		ByteBuffer cbb 
		= ByteBuffer.allocateDirect(colors.length * 4); 
		cbb.order(ByteOrder.nativeOrder()); 
		colorBuffer = cbb.asFloatBuffer(); 
		colorBuffer.put(colors); 
		colorBuffer.position(0); 
		ByteBuffer ibb 
		= ByteBuffer.allocateDirect(indices.length * 2); 
		ibb.order(ByteOrder.nativeOrder()); 
		indexBuffer = ibb.asShortBuffer(); 
		indexBuffer.put(indices); 
		indexBuffer.position(0);	
	}
}
