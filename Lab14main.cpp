// Chapter 15, Lab 14: Staff and BranchStaff classes

#include <iostream>
#include <iomanip>
#include <string>
#include "Staff.h"
#include "BranchStaff.h"

using namespace std;

// Function prototype
void displayInfo(BranchStaff);

int main()
{
  
  BranchStaff s;  //create object
  string name;
  int empNum;
  string date;
  string shift;
  int shiftNum;
  double rate;
  //get from user
	cout<<"Enter name: ";
  getline(cin,name);
  cout<<"Enter Employee Number: ";
  cin>>empNum;
  cout<<"Enter hire date: ";
  cin>>date;
  cout<<"Enter shift(Day/Night): ";
  cin>>shift;
  cout<<"Enter shift number: ";
  cin>>shiftNum;
  cout<<"Enter pay rate: ";
  cin>>rate;
  cout<<endl;
  //set the values from user in the object
  s.setName(name);
  s.setNumber(empNum);
  s.setDate(date);
  s.setShiftName(shift);
  s.setShiftNumber(shiftNum);
  s.setPayRate(rate);
  
  displayInfo(s);//call function using object s as parameter
  // Fill in with your code.
  

	return 0;
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(BranchStaff s)
{
  cout<<"Employee Informatuon:";
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << s.getName() << endl;
	cout << "Employee number: " 
		 << s.getNumber() << endl;
	cout << "Hire date: " 
		 << s.getHireDate() << endl;
	cout << "Shift: " 
		 << s.getShiftName() << endl;
	cout << "Shift number: " 
		 << s.getShiftNumber() << endl;
	cout << "Pay rate: $" 
		 << s.getPayRate() << endl;
}