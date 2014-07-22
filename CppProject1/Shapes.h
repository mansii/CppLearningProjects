#ifndef _SHAPES_H_
#define _SHAPES_H_

class Shape
{
public:
	Shape();
	virtual ~Shape();

	virtual void draw() = 0;

};

class MyRectangle : public Shape
{ 
public:
	MyRectangle();
	virtual ~MyRectangle();

	virtual void draw();


};

class MyTriangle : public Shape
{
public:
	MyTriangle();
	 virtual ~MyTriangle();
	

	virtual void draw();


};





#endif
