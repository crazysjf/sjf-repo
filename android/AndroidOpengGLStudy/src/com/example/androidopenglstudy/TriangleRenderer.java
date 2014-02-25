package com.example.androidopenglstudy;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import android.opengl.GLSurfaceView.Renderer;
import android.opengl.GLU;

public class TriangleRenderer implements Renderer {
	static final float[] vertexArray = new float[]{ 
			-0.8f , -0.4f * 1.732f , 0.0f , 
			0.8f , -0.4f * 1.732f , 0.0f , 
			0.0f , 0.4f * 1.732f , 0.0f ,  
	};
	private FloatBuffer vertexBuffer; 
	
	@Override
	public void onDrawFrame(GL10 gl) {
		gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
		gl.glClear(GL10.GL_COLOR_BUFFER_BIT	| GL10.GL_DEPTH_BUFFER_BIT); 
		ByteBuffer vbb = ByteBuffer.allocateDirect(vertexArray.length * 4); 
		vbb.order(ByteOrder.nativeOrder()); 
		FloatBuffer vertex = vbb.asFloatBuffer(); 
		vertex.put(vertexArray); 
		vertex.position(0); 
		gl.glColor4f(1.0f, 0.0f, 0.0f, 1.0f); 
		//		gl.glPointSize(80f); 
		gl.glLoadIdentity();
		gl.glTranslatef(0, 0, -4); 
		gl.glEnableClientState(GL10.GL_VERTEX_ARRAY); 
		gl.glVertexPointer(3, GL10.GL_FLOAT, 0, vertex); 
		gl.glDrawArrays(GL10.GL_LINE_LOOP, 0, 3); 
		gl.glDisableClientState(GL10.GL_VERTEX_ARRAY); 
	}

	@Override
	public void onSurfaceChanged(GL10 gl, int width, int height) {
		// Sets the current view port to the new size. 
		gl.glViewport(0, 0, width, height); 
		// Select the projection matrix 
		gl.glMatrixMode(GL10.GL_PROJECTION); 
		// Reset the projection matrix 
		gl.glLoadIdentity(); 
		// Calculate the aspect ratio of the window 
		GLU.gluPerspective(gl, 45.0f, 
				(float) width / (float) height, 
				0.1f, 100.0f); 
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
		ByteBuffer vbb 
		= ByteBuffer.allocateDirect(vertexArray.length * 4); 
		vbb.order(ByteOrder.nativeOrder()); 
		vertexBuffer = vbb.asFloatBuffer(); 
		vertexBuffer.put(vertexArray); 
		vertexBuffer.position(0); 
	}
}
