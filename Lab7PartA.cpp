#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
  string firstName,middleName,lastName;  //declare string
  string nameArranger;
  // ask the user for these
  cout<<"Enter your first name: ";
  cin>>firstName;
  cout<<"Enter your middle name: ";
  cin>>middleName;
  cout<<"Enter your last name: ";
  cin>>lastName;
  //add all the strings together including spaces and comma
  nameArranger=lastName+", " +firstName+" "+middleName;
  //display to user
  cout<<"Your Full name is:"<<endl;
  cout<<nameArranger;
}