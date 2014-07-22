#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<GL/gl.h>
#include"glut.h"
#include "GlutMan.h"
#include "Shapes.h"

MyTriangle g_t1;

MyRectangle g_r1;


void display()
{
	g_r1.draw();
	g_t1.draw();

	
	
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
	


	
	glutDisplayFunc(display);
	glutIdleFunc(display);
	

	glutMainLoop();
	getch();
	return 0;
}