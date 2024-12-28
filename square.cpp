// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Derrick Subnaik

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square.
// The variables related to a Square are:
//        - side: float and private member 
// The functions related to a Square are:
// FOR FUNCTIONS, SEE THE IMPLEMENTATION SECTION OF THIS PROGRAM
class Square
{
  private:
  float side;
  public:
  void setSide(float);
  float getSide();
  float findArea();
  float findPerimeter();
};

int main()
{
	Square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square
  
	// FILL IN THE  CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)
  cout<<"PLease input the size of the side of square"<<endl;
  cin>>size;

	// FILL IN THE CODE THAT CALLS SetSide.
  box.setSide(size);


	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN INCLUDING THE LENGTH OF THE SIDE ENTERED BY THE USER (SEE OUTPUT SAMPLE).
  
  cout<<"The area of the square of side "<<size<<" is "<<box.findArea()<<endl;

	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN INCLUDING THE LENGTH OF THE SIDE ENTERED BY THE USER (SEE OUTPUT SAMPLE).
 cout<<"The periemeter of the square with side "<<size<<" "<<box.findPerimeter()<<endl;

	return 0;
}

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length)
{
	side = length;
}
//**************************************************
//  getSide
//
//  task:	 This procedure returns the length of a side in the side member
//***************************************************
float Square::getSide()
{
  return side;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
	return 4 * side;
}