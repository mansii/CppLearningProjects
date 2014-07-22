#include<windows.h>
#include "Shapes.h"
#include <stdio.h>
#include<GL/gl.h>
#include"glut.h"


Shape::Shape()
{
	printf("\nCalling shape constructor");

}

Shape::~Shape()
{
	printf("Calling shape destructor\n");

}

MyRectangle::MyRectangle()
{
	printf("\nCalling rectangle constructor");

}

MyRectangle::~MyRectangle()
{
	printf("\nCalling rectangle destructor");

}

void MyRectangle::draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();
	glTranslatef(0, 0, 0);

	glBegin(GL_QUADS);

	glColor3d(0.7465, 1, 1);
	glVertex3f(0, 0, 0);

	glColor3d(0.123, 1, 1);
	glVertex3f(1, 0, 0);

	glColor3d(1, 0.777, 1);
	glVertex3f(1, 1, 0);

	glColor3d(1, 1, .2222);
	glVertex3f(0, 1, 0);
	glEnd();
}


MyTriangle::MyTriangle()
{
	printf("\nCalling MyTriangle constructor");

}

MyTriangle::~MyTriangle()
{
	printf("\nCalling MyTriangle destructor");

}
void MyTriangle::draw()
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
}