//******************************************************
//Program description: This program uses a structure to //hold data about a rectangle. It calculates the area //and perimeter of a box //*****************************************************

#include <iostream>
#include <iomanip>
using namespace std;

// Fill in code to declare a structure named Dimensions that contains TWO float members, length and width
struct Dimensions
{
  float length;
  float width;
};
// Fill in code to declare a structure named Rectangle that contains THREE members, area, perimeter, and sizes. area and perimeter should be floats, whereas sizes should be a dimensions structure variable
struct Rectangle
{
  float area;
  float perimeter;
  Dimensions sizes;
};

//Function Prototypes
float calculateArea (Rectangle); //This function accepts Rectangle structure as argument and returns area of the rectangle.
float calculatePerimeter(Rectangle); //This function accepts Rectangle structure as argument and returns area of the rectangle.

int main()
{
	// Fill in code to define a rectangle structure variable named box.

  Rectangle box;
	
  cout << "Enter the length of a rectangle: ";

	// Fill in code to read in the length to the appropriate location
  cin>>box.sizes.length;
	cout << "Enter the width of a rectangle: ";

	// Fill in code to read in the width to the appropriate location

	cout << endl << endl;
  cin>>box.sizes.width;
	// Fill in code to compute the area and store it in the appropriate location. 
  //Hint: Call appropriate function here
  box.area=calculateArea(box);
	// Fill in code to compute the perimeter and store it in the appropriate location
  //Hint: Call appropriate function here
  box.perimeter=calculatePerimeter(box);
	cout << fixed << showpoint << setprecision(2);

  //Fill in the code below between operators "<<  <<"" to display the area of the rectangle
	cout << "The area of the rectangle is " <<box.area<< endl;

 //Fill in the code below between operators "<<  <<"" to display the perimeter of the rectangle 
	cout << "The perimeter of the rectangle is " <<box.perimeter
		 << endl;

	return 0;
}

//**********************************************************
//                        calculateArea
//
// task           This function calculates the area
//                of a box (length * width)
// data in:       a structure containing length & width
// data returned  the area of the box
//
//**********************************************************
float calculateArea (Rectangle box)
{
  return box.sizes.length*box.sizes.width;
}


//**********************************************************
//                        calculatePerimeter
//
// task           This function calculates the perimeter
//                of a box ( 2 *length + 2 * width)
// data in:       a structure containg length & width
// data returned  the perimeter of the box
//
//**********************************************************
float calculatePerimeter(Rectangle box)
{
  return (2*box.sizes.length)+(2*box.sizes.width);
}