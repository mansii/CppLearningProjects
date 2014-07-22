#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include "App.h"

int main(int argc, char **argv)
{
  printf("Hello world");
  App::Instance().init(argc, argv);
  App::Instance().run();
  App::Instance().close();

  getch();
  return 0;
}