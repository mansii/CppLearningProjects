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
  bool mShowTriangle = false;
  mT1 = new MyTriangle(0.4, 0.5, 0.2, 0.4);

  bool mShowRectangle = false;
  mR1 = new MyRectangle(0.6, 0.2, 0.3, 0.6);

  bool mShowSquare = false;
  mS1 = new MySquare(0.2, 0.2, 0.3);

  bool mShowCircle = false;
  mC1 = new MyCircle(0.3, 0.8, 0.1);

  printf("Calling app constructor");

}

App::~App()
{
  delete mT1;
  delete mR1;
  delete mS1;
  delete mC1;

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

  if (mShowTriangle)
    mT1->draw();

  if (mShowRectangle)
    mR1->draw();

  if (mShowSquare)
    mS1->draw();

  if (mShowCircle)
    mC1->draw();
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
            mShowTriangle = false;
            mShowRectangle = false;
            mShowSquare = false;
            mShowCircle = false;

  } break;

  case 't': mShowTriangle = true;
    break;

  case 'r':  mShowRectangle = true;
    break;

  case 's':  mShowSquare = true;
    break;

  case 'c':  mShowCircle = true;
    break;

  default:
    break;
  }
}

void App::keyboard(unsigned char key, int mousePositionX, int mousePositionY)
{
  App::Instance().processKeyboard(key, mousePositionX, mousePositionY);
}
