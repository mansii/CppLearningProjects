#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<GL/gl.h>
#include"glut.h"

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, -3);

	glBegin(GL_TRIANGLES);

	glColor3d(1, 0, 0);
	glVertex3f(3, -5, 8);

	glColor3d(1, 1, 1);
	glVertex3f(0, -6, -10);

	glColor3d(1, 0, 1);
	glVertex3f(5, 0, -19);

	glEnd();
	glutSwapBuffers();
}

void quaddisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, -3);
	
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




void initialize()
{
	glMatrixMode(GL_PROJECTION);
	glViewport(0, 0, 640, 480);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	gluPerspective(45, 640.0 / 480.0, 1, 500);
	glMatrixMode(GL_MODELVIEW);
	glClearDepth(1.0f);
	glClearColor(0.0, 0.0, 0.0, 1.0);

}
int main(int argc,char **argv)
{
	printf("Hello world");
	

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutInitWindowSize(640, 480);
	glutCreateWindow("testing");

	glutDisplayFunc(quaddisplay);
	glutIdleFunc(quaddisplay);
	initialize();

	glutMainLoop();
	getch();
	return 0;
}