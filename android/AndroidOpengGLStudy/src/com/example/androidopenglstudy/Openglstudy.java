package com.example.androidopenglstudy;

import android.app.Activity;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import android.view.Window;
import android.view.WindowManager;

public class Openglstudy extends Activity {
	GLSurfaceView mGLSurfaceView;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		this.requestWindowFeature(Window.FEATURE_NO_TITLE); 
		getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN); 
		mGLSurfaceView = new GLSurfaceView(this);  
		mGLSurfaceView.setRenderer(new IcosahedronRenderer()); 
		//mGLSurfaceView.setRenderer(new TriangleRenderer());
		setContentView(mGLSurfaceView);
	}
}
