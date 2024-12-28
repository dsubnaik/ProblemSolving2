#include <iostream>
#include "Converter.h"

using namespace std;

//main function
int main() 
{
  cout<<"This program converts whole numbers\n";
  cout<<"in the range of 0-9999 into an English\n";
  cout<<"Description of the number\n";
  
  int number;
  
  //asks the user
  cout<<"Enter a whole number: ";
  cin>>number;
  
  //check value
  while(number<0 || number>9999)
    {
      cout<<"invalid!";
      cout<<"Enter a whole number: ";
      cin>>number;
    }
  
  Converter obj(number);
  obj.display();
  
  
}