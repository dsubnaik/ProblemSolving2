#include<iostream>
using namespace std;

#ifndef square_h
#define square_h
//class declaration
class Square
{
   private:
      float side;
   public:
      Square();
      void setSide(float length);
      float getSide();
      float findArea();
      float findPerimeter();
};
#endif