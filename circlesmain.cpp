#include <iostream>
#include"circle.h"
using namespace std;

// __________________________________________________________________
//
// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles
// (spheres in the program) initialized at definition or set by a function.

// class declaration section	(header file)

// PLACE YOUR NAME HERE
// Derrick Subnaik

	
const double PI = 3.14;

// Client section 

int main()
{
  Circles cir1;
  Circles cir2;
  cir1.radius=2;
  
	Circles sphere(cir1.radius);
	sphere.setCenter(0, 0);
	sphere.printCircleStats();

	cout << "The area of the circle is " << sphere.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere.findCircumference() << endl;
cout<<"And\n";
  Circles sphere(cir2.radius);
	sphere.setCenter(0, 0);
	sphere.printCircleStats();

	cout << "The area of the circle is " << sphere.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere.findCircumference() << endl;
	return 0;
}
