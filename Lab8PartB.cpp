// This program uses a structure to hold data about a rectangle

// Derrick Subnaik
// Lab 8 Part B

#include <iostream>
#include <iomanip>
using namespace std;


// Fill in code to declare a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats
struct Rectangle
{
  float length,width,area,perimeter;
};
int main()
{
	// Fill in code to define a rectangle variable named myBox
  Rectangle myBox;
	cout << "Enter the length of a rectangle: ";

	// Fill in code to read in the length member of myBox
  cin>>myBox.length;
	cout << "Enter the width of a rectangle: ";
  cin>>myBox.width;
	// Fill in code to read in the width member of myBox

	cout << endl << endl;

	// Compute the area member of myBox
	myBox.area = myBox.length * myBox.width; 


	// Compute the perimeter member of myBox

	cout << fixed << showpoint << setprecision(2);
	myBox.perimeter = 2 * myBox.length + 2 * myBox.width;

	// Fill in code to output the area with an appropriate message
  cout<<"The area of the rectangle is "<<myBox.area<<endl;
	// Fill in code to output the perimeter with an appropriate message
  cout<<"The perimeter of the rectangle is "<<myBox.perimeter<<endl;
	// Fill in blank part of the code to check if the myBox is a square or not
	if (myBox.length==myBox.width) //Fill the test condition for if statement here
		cout << "The rectangle is a square" << endl;
	else
		cout << "The rectangle is a not a square" << endl;

	return 0;
}