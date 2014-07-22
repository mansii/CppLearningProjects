#include "GlutMan.h"
#include <stdio.h>
#include"glut.h"

GlutMan::GlutMan()
{
	mWindowWidth = 640; 
	mWindowHeight = 480;
	printf("empty constructor 640*480");


}
 
GlutMan::GlutMan(int _windowWidth, int _windowHeight)
{
	mWindowWidth = _windowWidth;
	mWindowHeight = _windowHeight;
	printf("Width (%i),Height (%i)", mWindowWidth, mWindowHeight);
}
GlutMan::~GlutMan()
{

}

void GlutMan::init()
{
	glutInitWindowSize(mWindowWidth, mWindowHeight);
	glutCreateWindow("testing");

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//gluPerspective(45, 640.0 / 480.0, 1, 500);
	glMatrixMode(GL_PROJECTION);
	glViewport(0, 0, mWindowWidth, mWindowHeight);
	glOrtho(0.0, 1.0, 1.0, 0.0, 1.0, -1.0);

	glClearDepth(1.0f);
	glClearColor(0.0, 0.0, 0.0, 1.0);

}