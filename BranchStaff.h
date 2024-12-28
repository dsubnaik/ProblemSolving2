#include <iostream>
#include <iomanip>
#include "Staff.h"
#ifndef BranchStaff_H
#define BranchStaff_H
using namespace std;

//derived class
class BranchStaff: public Staff
{
//private class members
  private:
  int shiftNumber;
  double payRate;
  string shiftName;

  public:
//constructors
  BranchStaff(){};
  BranchStaff(string empName, int number, string date, int shiftNum, double rate, string name):Staff(empName,number,date)
  {
    setName(empName);
    setNumber(number);
    setDate(date);
    shiftNumber=shiftNum;
    payRate=rate;
    shiftName=name;
  }
//setters and getters for each variable in branch
  int getShiftNumber()
  {
    return shiftNumber;
  }
  void setShiftNumber(int number)
  {
    shiftNumber=number;
  }
  string getShiftName()
  {
    return shiftName;
  }
  void setShiftName(string name)
  {
    shiftName=name;
  }
  double getPayRate()
  {
    return payRate;
  }  
  void setPayRate(double rate)
  {
    payRate=rate;
  }
};
#endif