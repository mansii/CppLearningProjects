#ifndef _APP_H_
#define _APP_H_

#include "Shapes.h"

class App
{
public:
  static App& Instance();


  void init(int argc, char **argv);
  void run();
  void close();

private:
  App();
  virtual ~App();
  static void display();
  static void keyboard(unsigned char key, int mousePositionX, int mousePositionY);
  void draw();
  void processKeyboard(unsigned char key, int mousePositionX, int mousePositionY);

  bool mShowRectangle;
  MyRectangle* mR1;

  bool mShowSquare;
  MySquare* mS1;

  bool mShowTriangle;
  MyTriangle* mT1;

  bool mShowCircle;
  MyCircle* mC1;

};
#endif