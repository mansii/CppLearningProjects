#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<GL/gl.h>
#include"glut.h"
#include "GlutMan.h"
#include "Shapes.h"

MyTriangle g_t1(0.4,0.5,0.2,0.4);

MyRectangle g_r1(0.6, 0.2, 0.3, 0.6);

MySquare g_s1(0.2, 0.2, 0.3);

//MyCircle g_c1(0.8, 0.8, 0.1)

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	g_t1.draw();
	g_r1.draw();
	g_s1.draw();
	//g_c1.draw();
 
	

	
	
	glutSwapBuffers();
}






int main(int argc,char **argv)
{
	printf("Hello world");
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);



	GlutMan gMan1(800,800);
	gMan1.init();
	 
	
	glutDisplayFunc(display);
	glutIdleFunc(display);
	


	
	glutDisplayFunc(display);
	glutIdleFunc(display);
	

	glutMainLoop();
	getch();
	return 0;
}