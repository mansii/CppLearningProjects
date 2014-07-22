#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<GL/gl.h>
#include"glut.h"
#include "GlutMan.h"

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();
	glTranslatef(0, 0, 0);

	glBegin(GL_TRIANGLES);

	glColor3d(1, 0, 0);
	glVertex3f(0.5, 0, 0);

	glColor3d(1, 1, 1);
	glVertex3f(0, 1, 0);

	glColor3d(1, 0, 1);
	glVertex3f(1, 1, 0);

	glEnd();
	glutSwapBuffers();
}

void quaddisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	//glTranslatef(0, 0, -3);
	
	glBegin(GL_QUADS);

	glColor3d(0.7465, 1, 1);
	glVertex3f(-5, -5, -10);

	glColor3d(0.123, 1, 1);
	glVertex3f(5, -5, -10);

	glColor3d(1, 0.777, 1);
	glVertex3f(5, 5, -10);

	glColor3d(1, 1, .2222);
	glVertex3f(-5, 5, -10);
	glEnd();
	glutSwapBuffers();


}





int main(int argc,char **argv)
{
	printf("Hello world");
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);



	GlutMan gMan1(1200,200);
	gMan1.init();
	

	
	glutDisplayFunc(display);
	glutIdleFunc(display);
	

	glutMainLoop();
	getch();
	return 0;
}