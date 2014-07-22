#ifndef _GLUT_MAN_H_
#define _GLUT_MAN_H_

class GlutMan
{
public:

  GlutMan();
  GlutMan(int _windowWidth, int _windowHeight);
  virtual ~GlutMan();

  void init();
  void close() {}


private:
  int mWindowWidth;
  int mWindowHeight;





};







#endif 
