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
  MyRectangle(float _x, float _y, float _w, float _h);
  virtual ~MyRectangle();

  virtual void draw();

private:
  float mX;
  float mY;
  float mW;
  float mH;


};

class MyTriangle : public Shape
{
public:
  MyTriangle(float _tx, float _ty, float _tw, float _th);
  virtual ~MyTriangle();


  virtual void draw();

private:
  float mTx;
  float mTy;
  float mTw;
  float mTh;



};

class MySquare : public Shape
{
public:
  MySquare(float _sx, float _sy, float _ss);
  virtual ~MySquare();

  virtual void draw();

private:
  float mSx;
  float mSy;
  float mSs;



};


class MyCircle : public Shape
{
public:
  MyCircle(float _cx, float _cy, float _cr);
  virtual ~MyCircle();


  virtual void draw();

private:
  float mCx;
  float mCy;
  float mCr;
  
};


/*class Stickman :public Shape
{
public:
  Stickman(){}
  virtual ~Stickman(){}
  virtual void draw(){}

};*/

class MyLine : public Shape
{
public:
  MyLine(float _lx1, float _ly1, float _lx2, float _ly2);
  MyLine(float _lx1, float _ly1, float _length, int _angle, bool _blah);
  virtual ~MyLine();

  virtual void draw();

private:
  float mLx1;
  float mLy1;
  float mLx2;
  float mLy2;

 

};


#endif
