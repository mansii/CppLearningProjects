#include<windows.h>
#include "App.h"
#include <stdio.h>
#include<GL/gl.h>
#include"glut.h"
#include "GlutMan.h"
#include "Shapes.h"

App& App::Instance()
{
  static App theInstance;
  return theInstance;


}

App::App()
{
 /* bool mShowTriangle = false;
  mT1 = new MyTriangle(0.4, 0.5, 0.2, 0.4);*/

  bool mShowRectangle = false;
  mR1 = new MyRectangle(0.5, 0.6, 0.1, 0.01);

/*  bool mShowSquare = false;
  mS1 = new MySquare(0.2, 0.2, 0.3);*/

 // bool mShowCircleH = false;
  //mHead = new MyCircle(0.5, 0.66, 0.06);

  /*bool mShowCircleE1 = false;
  mCE1 = new MyCircle(0.3, 0.08, 0.06);*/

/*  bool mShowLine1 = false;
  mL1 = new MyLine(0.5f, 0.25f, 0.35, 90, false);

  bool mShowLineK1 = false;
  mLK1 = new MyLine(0.5f, 0.25f, 0.08, 0, false);

  bool mShowLineK2= false;
  mLK2 = new MyLine(0.5f, 0.25f, 0.08, 180, false);

  bool mShowLineH1= false;
  mLH1 = new MyLine(0.5f, 0.45f, 0.09, 45, false);

  bool mShowLineH2 = false;
  mLH2 = new MyLine(0.5f, 0.45f, 0.09, 135, false);  */

  bool mShowStickman = false;
  mS = new Stickman


  printf("Calling app constructor");

}

App::~App()
{
  /*delete mT1;
  delete mR1;
  delete mS1;*/
  delete mCH;
 // delete mCE1;
  delete mL1;
  delete mLK1;
  delete mLK2;
  delete mLH1;
  delete mLH2;
}

void App::init(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

  GlutMan gMan1(800, 800);
  gMan1.init();

  glutDisplayFunc(display);
  glutIdleFunc(display);
  glutKeyboardFunc(keyboard);

}

void App::run()
{
  glutMainLoop();

}

void App::close()
{

}

void App::draw()
{

 /* if (mShowTriangle)
    mT1->draw();*/

  if (mShowRectangle)
    mR1->draw();

 /* if (mShowSquare)
    mS1->draw();*/

  if (mShowCircleH)
    mCH->draw();

 /* if (mShowCircleE1)
    mCE1->draw();*/

  if (mShowLine1)
    mL1->draw();

  if (mShowLineK1)
    mLK1->draw();

  if (mShowLineK2)
    mLK2->draw();

  if (mShowLineH1)
    mLH1->draw();

  if (mShowLineH2)
    mLH2->draw();
}

void App::display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  App::Instance().draw();

  glutSwapBuffers();

}

void App::processKeyboard(unsigned char key, int mousePositionX, int mousePositionY)
{

  switch (key)
  {
  case 27:
    exit(0);
    break;

  case 'x':
  {
         //  mShowTriangle = false;
            mShowRectangle = false;
          //  mShowSquare = false;
            mShowCircleH = false;
           // mShowCircleE1 = false;
            mShowLine1 = false;
            mShowLineK1 = false;
            mShowLineK2 = false;
            mShowLineH1 = false;
            mShowLineH2 = false;


  } break;

/*  case 't': mShowTriangle = true;
    break; */

  case 'r':  mShowRectangle = true;
    break;

/*  case 's':  mShowSquare = true;
    break;*/

  case 'c':  mShowCircleH = true;
    break;

 /* case 'e':  mShowCircleE1 = true;
    break;*/

  case 'l': mShowLine1 = true;
    break;

  case 'm': mShowLineK1 = true;
    break;

  case 'n': mShowLineK2 = true;
    break;

  case 'o': mShowLineH1 = true;
    break;

  case 'p': mShowLineH2 = true;
    break;


  default:
    break;
  }
}

void App::keyboard(unsigned char key, int mousePositionX, int mousePositionY)
{
  App::Instance().processKeyboard(key, mousePositionX, mousePositionY);
}
