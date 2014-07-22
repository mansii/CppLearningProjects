#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<GL/gl.h>
#include"glut.h"
#include "GlutMan.h"
#include "Shapes.h"

bool g_showTriangle = false;
MyTriangle g_t1(0.4, 0.5, 0.2, 0.4);

bool g_showRectangle = false;
MyRectangle g_r1(0.6, 0.2, 0.3, 0.6);

bool g_showSquare = false;
MySquare g_s1(0.2, 0.2, 0.3);

bool g_showCircle = false;
MyCircle g_c1(0.3, 0.8, 0.1);



void keyboard(unsigned char key, int mousePositionX, int mousePositionY)
{
  switch (key)
  {
  case 27:
    exit(0);
    break;

  case 'x':
  {
            g_showTriangle = false;
            g_showRectangle = false;
            g_showSquare = false;
            g_showCircle = false;

  } break;

  case 't': g_showTriangle = true;
    break;

  case 'r':  g_showRectangle = true;
    break;

  case 's':  g_showSquare = true;
    break;

  case 'c':  g_showCircle = true;
    break;

  default:
    break;
  }
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  if (g_showTriangle)
    g_t1.draw();

 if (g_showRectangle) 
     g_r1.draw();

 if (g_showSquare)
g_s1.draw();

 if (g_showCircle)
g_c1.draw();





  glutSwapBuffers();
}






int main(int argc, char **argv)
{
  printf("Hello world");
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);



  GlutMan gMan1(800, 800);
  gMan1.init();


  glutDisplayFunc(display);
  glutIdleFunc(display);




  glutDisplayFunc(display);
  glutIdleFunc(display);

  glutKeyboardFunc(keyboard);
  glutMainLoop();
  getch();
  return 0;
}