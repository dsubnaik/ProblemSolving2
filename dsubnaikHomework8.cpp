#include <iostream>
#include<iomanip>//used setprecision for two decimal spaces
#include<string>
using namespace std;

//class StaffMember is the abstract class
class StaffMember
{
//protected variables

  protected:
//these variables are common in every class in the program
    string name;//stores name
    string address;//stores address
    string phone;//store phone number

//public variables
  public:
  StaffMember(string n, string a, string p)//constructor!!
  {
    name=n;
    address=a;
    phone=p;
  }  
  virtual void displayInfo()=0;//pure virtual function for displaying information
  virtual void calculate()=0;//pure virtual function for calculating and displaying pay

};

//Volunteer class, only use name, phone, and address and volunteers do not get paid
class Volunteer: public StaffMember
{
  public:
  Volunteer(string n, string a, string p): StaffMember(n, a, p)
  {}//nothing is need this constructor defintion

//displayInfo will show name, address, and phone number of the volunteer
  void displayInfo()
  {
    cout<<"\n----------Volunteers----------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone<<endl;
  }
//volunteers do not get paid:(
  void calculate()
  {
    cout<<"Volunteers do not get paid"<<endl;
  }
  
  
};

//employee class calculates the pay of an employee based on days worked and how much they make per day
class Employee: public StaffMember
{
//protected variables
  protected:
  string SSN; 
  int daysWorked;
  double dayPayRate;

  public:
  Employee(string n, string a, string p, string s, int days, double rate): StaffMember(n, a, p)//constructor
{
  SSN=s;
  daysWorked=days;
  dayPayRate=rate;
}
//display employee information
void displayInfo()
  {
    cout<<"\n----------Employee----------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone<<endl;
    cout<<"Social Security Number: "<<SSN<<endl;
    cout<<"Days worked"<<daysWorked<<endl;
    cout<<"Pay Rate per Day"<<dayPayRate<<endl;
  }
//calculates the total pay of employee
void calculate()
  {
    double total=daysWorked*dayPayRate;
    cout<<"Employee "<<name<<" pay: "<<total<<endl;
  }
  
};

//Doctor class 
class Doctor: public StaffMember
{
  protected:
    string SSN;//social security number
    double payRate;//hourly payrate
    int hours;//hours worked
    int surgical;//how many surgeries that are done
    int costPerSurgery;//cost per sergury

  public:
  Doctor(string n, string a, string p, string s,double rate,int hrs, int surgeries, int cost): StaffMember(n, a, p)//constructor
    {
      SSN=s;
      payRate=rate;
      hours=hrs;
      surgical=surgeries;
      costPerSurgery=cost;
    }
//display doctor information
   void displayInfo()
  {
    cout<<"\n----------Doctor---------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone<<endl;
    cout<<"Social Security Number: "<<SSN<<endl;
    cout<<"Pay Rate: $"<<fixed<<setprecision(2)<<payRate<<" /hour"<<endl;
    cout<<"Hours worked: "<<hours<<endl;
    cout<<"Surgeries completed: "<<surgical<<endl;
    cout<<"Cost per Surgery: $"<<fixed<<setprecision(2)<<costPerSurgery<<endl;
  }
//caculate the doctor total pay which is payRate*hours + 10% of surgical cost
  void calculate()
  {
    double total=(payRate*hours) + (surgical*costPerSurgery*.10);
    cout<<"Doctor "<<name<<" total pay is $"<<fixed<<setprecision(2)<<total<<endl;
  }
};

//Nurse class
class Nurse: public StaffMember
{
  protected:
    string SSN;//social security number
    double payRate;//hourly parate
    int hours;//hours worked
  public:
  Nurse(string n, string a, string p, string s,double rate,int hrs): StaffMember(n, a, p)//constructor
  {
    SSN=s;
    payRate=rate;
    hours=hrs;
  }
//display nurse's information
  void displayInfo()
  {
    cout<<"\n----------Nurse---------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone<<endl;
    cout<<"Social Security Number: "<<SSN<<endl;
    cout<<"Pay Rate: $"<<fixed<<setprecision(2)<<payRate<<" /hour"<<endl;
    cout<<"Hours worked: "<<hours<<endl;
  }
//calculate and display the nurse pay which is payRate*hours
  void calculate()
  {
    double total=payRate*hours;
    cout<<"Nurse "<<name<<" pay: $"<<fixed<<setprecision(2)<<total<<endl;
  }
};
//Executive class
class Executive: public StaffMember
{
  protected:
    string SSN;//social security number
    double payRate;//hourly pay rate
    int hours;//hours worked
    int bonus;//bonus pay
  public:
   Executive(string n, string a, string p, string s,double rate,int hrs, int b):StaffMember(n, a, p)//constructor
  {
    SSN=s;
    payRate=rate;
    hours=hrs;
    bonus=b;
  }
//display information
 void displayInfo()
  {
    cout<<"\n----------Executive---------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone<<endl;
    cout<<"Social Security Number: "<<SSN<<endl;
    cout<<"Pay Rate: $"<<fixed<<setprecision(2)<<payRate<<" /hour"<<endl;
    cout<<"Hours worked: "<<hours<<endl;
    cout<<"Bonus: $"<<bonus<<endl;
  }
//calculate total pay which is (payRate*hours) +bonus pay
   void calculate()
  {
    double total=(payRate*hours)+bonus;
    cout<<"Executive "<<name<<" Pay is: $"<<fixed<<setprecision(2)<<total<<endl;
  }
};

//Recptionist class
class Receptionist: public StaffMember
{
  protected:
    string SSN;//social security number
    double payRate;//pay per hour
    int hours;//hours worked
  public:
  Receptionist(string n, string a, string p, string s,double rate,int hrs): StaffMember(n, a, p)//constructor
  {
    SSN=s;
    payRate=rate;
    hours=hrs;
  }
//display Receptionist information
  void displayInfo()
  {
    cout<<"\n----------Receptionist---------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone<<endl;
    cout<<"Social Security Number: "<<SSN<<endl;
    cout<<"Pay Rate: $"<<fixed<<setprecision(2)<<payRate<<" /hour"<<endl;
    cout<<"Hours worked: "<<hours<<endl;
  }
//calculate and display receptionist information
  void calculate()
  {
    double total=payRate*hours;
    cout<<"Receptionist "<<name<<" pay: $"<<fixed<<setprecision(2)<<total<<endl;
  }
};

//main function!!!!!
int main() 
{
  //create objects
  Volunteer Diana("Diana", "11 South Paris Hill Rd.","(984) 163-0125");
  Volunteer Ryan( "Ryan","625 Amergie Dr.", "(750) 837 4154");
  Doctor Gene("Gene", "311 Delaware Ave.","(275) 249-0721", "047-86-8586",150.0,160, 3, 10000);
  Nurse Raye("Raye", "933 Honey Creek St.","(722) 521-3317","417-46-7995",50.5,80);
  Nurse Kristopher("Kristopher","99 Harvard St.","(672) 790-2499","517-42-5738", 45.9,100);
  Receptionist Sam("Sam", "8426 Proctor St.", "(301) 936-4987", "365-07-9906", 30.0, 160);
  Executive Sean("Sean", "6200 Seaside Dr.", "(361) 956-4787","678-16-4701",130.0,160,12000);

  //call to display objects
  Diana.displayInfo();
  Diana.calculate();

  Ryan.displayInfo();
  Ryan.calculate();
  
  Gene.displayInfo();
  Gene.calculate();

  Raye.displayInfo();
  Raye.calculate();

  Kristopher.displayInfo();
  Kristopher.calculate();

  Sam.displayInfo();
  Sam.calculate();

  Sean.displayInfo();
  Sean.calculate();
}
