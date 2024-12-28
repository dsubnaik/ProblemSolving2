#include<iostream>
#include"circle.h"
using namespace std;


const double PI = 3.14;

Circles::Circles(fl)
{
	radius = 1;
  int center_x=0;
  int center_y=0;
}

// Fill in the code to implement the non-default constructor
Circles :: Circles(float r)
{
  radius=r;
}
// Fill in the code to implement the findArea member function
double Circles :: findArea()
{
  return PI * radius * radius;
}
// Fill in the code to implement the findCircumference member function
double Circles :: findCircumference()
{
  return 2 * PI * radius;
}
void Circles::printCircleStats()
// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
{
	cout << "The radius of the circle is " << radius << endl;
	cout << "The center of the circle is (" << center_x
		 << "'" << center_y << ")" << endl;
}

void Circles::setCenter(int x, int y)
// This procedure will take the coordinates of the center of the circle from
// the user and place them in the appropriate member data.
{
	center_x = x;
	center_y = y;
}