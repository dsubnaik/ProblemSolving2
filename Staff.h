#include <iostream>
#include <iomanip>
#include <string>
#ifndef Staff_H
#define Staff_H

using namespace std;

//Base class
class Staff
{
//private class memebers
  private:
  string employeeName;
  int employeeNumber;
  string hireDate;

  public:
//constructors
  Staff(){};
  Staff(string name,int number,string date)
  {
    employeeName=name;
    employeeNumber=number;
    hireDate=date;
  }
//setters and getters for each variable
  string getName()
  {
    return employeeName;
  }
  void setName(string name)
  {
    employeeName=name;
  }
  int getNumber()
  {
    return employeeNumber;
  }
  void setNumber(int number)
  {
    employeeNumber=number;
  }
  string getHireDate()
  {
    return hireDate;
  }
  void setDate(string date)
  {
    hireDate=date;
  }

  //~Staff();
};

#endif
