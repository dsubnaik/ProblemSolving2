// This program declares the Square class and uses 
// member functions to find the perimeter
// and area of the square

// Derrick Subnaik

#include <iostream>
#include "Square.h"
using namespace std; 

int main()
{
	Square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square
  
	//CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE SIDE OF THE SQUARE. 
  
  cout << "Please input the size of the side of the square" << endl;
  cin >> size;
  

	// CALLS SetSide.
  box.setSide(size);


	// RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN INCLUDING THE LENGTH OF THE SIDE ENTERED BY THE USER 
  cout << "The area of the square of side " << box.getSide() << " is " << box.findArea() << endl;

	// RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN INCLUDING THE LENGTH OF THE SIDE ENTERED BY THE USER 
  cout << "The perimeter of the square of side " << box.getSide() << " is " << box.findPerimeter() << endl;

	return 0;
}