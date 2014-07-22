#include<windows.h>
#include "Shapes.h"
#include <stdio.h>
#include<GL/gl.h>
#include"glut.h"
#include <math.h>


Shape::Shape()
{
	printf("\nCalling shape constructor");

}

Shape::~Shape()
{
	printf("Calling shape destructor\n");

}

MyRectangle::MyRectangle(float _x, float _y, float _w, float _h)
{
	mX = _x;
	mY = _y;
	mW = _w;
	mH = _h;
	printf("\nCalling rectangle constructor");

}

MyRectangle::~MyRectangle()
{
	printf("\nCalling rectangle destructor");

}

void MyRectangle::draw()
{
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();
	glTranslatef(0, 0, 0);

	glBegin(GL_QUADS);

	glColor3d(0.7465, 0.1,0.1);
	glVertex3f(mX, mY, 0);

	glColor3d(0.123, 1, 1);
	glVertex3f(mX+mW, mY, 0);

	glColor3d(0.3, 0.777, 0.2);
	glVertex3f(mX+mW, mY+mH, 0);

	glColor3d(0.1, 0.3, .2222);
	glVertex3f(mX, mY+mH, 0);
	glEnd();
}


MyTriangle::MyTriangle(float _tx, float _ty, float _tw, float _th)
{
	mTx = _tx;
	mTy = _ty;
	mTw = _tw;
	mTh = _th;
	printf("\nCalling MyTriangle constructor");

}

MyTriangle::~MyTriangle()
{
	printf("\nCalling MyTriangle destructor");

}
void MyTriangle::draw()
{
	//glLoadIdentity();
	glTranslatef(0, 0, 0);

	glBegin(GL_TRIANGLES);

	glColor3d(1, 0, 0);
	glVertex3f(mTx, mTy, 0);

	glColor3d(1, 1, 1);
	glVertex3f(mTx+mTw, mTy, 0);

	glColor3d(1, 0, 1);
	glVertex3f(mTx+(mTw/2), mTy+mTh, 0);

	glEnd();
}

MySquare::MySquare(float _sx, float _sy, float _ss)
{
	mSx = _sx;
	mSy = _sy;
	mSs = _ss;

	printf("\nCalling square constructor");

}

MySquare::~MySquare()
{
	printf("\nCalling square destructor");

}

void MySquare::draw()
{
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();
	glTranslatef(0, 0, 0);

	glBegin(GL_QUADS);

	glColor3d(0.7465, 0.1, 0.1);
	glVertex3f(mSx, mSy, 0);

	glColor3d(0.123, 1, 1);
	glVertex3f(mSx + mSs, mSy, 0);

	glColor3d(0.3, 0.777, 0.2);
	glVertex3f(mSx + mSs, mSy + mSs, 0);

	glColor3d(0.1, 0.3, .2222);
	glVertex3f(mSx, mSy + mSs, 0);
	glEnd();
}

MyCircle::MyCircle(float _cx, float _cy, float _cr)
{
	mCx = _cx;
	mCy = _cy;
	mCr = _cr;

	printf("\nCalling circle constructor");

}

MyCircle::~MyCircle()
{
	printf("\nCalling circle destructor");

}

void MyCircle::draw()
{
	float x1, y1, x2, y2;
	float angle;
	double radius = mCr;

	x1 = mCx, y1 = mCy;
	glColor3f(1.0, 1.0, 0.6);

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);

	for (angle = 1.0f; angle < 361.0f; angle += 0.2)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}

	glEnd();
}