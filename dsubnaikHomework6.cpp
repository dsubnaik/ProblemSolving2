#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

//structure for student info
struct StudentInfo
{
  string name;
  int idNum;
  int *test;
  double average;
  char grade;
};

int main()
{
  int students;
  int numOfTests;
  //ask the user for how many there are
  cout<<"How many Students are there? ";
  cin>>students;
  cout<<"How many Test Scores are there for each student? ";
  cin>>numOfTests;
  StudentInfo * studArray=nullptr;
  //dynamically allocate the size of the array
  studArray = new StudentInfo[students];

  //dynamically allocate the size of the array for the number of tests
  for(int i=0;i<students;i++)
    {
      studArray[i].test= new int[numOfTests];
    }
  
  //get information from user
  for(int i=0;i<students;i++)
    {
      //asks the user for name of the student
      cout<<"\nPlease enter student "<< i+1<<" name: ";
      cin>>studArray[i].name;
      
      //asks the user for the ID number of the student
      cout<<"Please enter student "<<i+1<<" ID number: ";
      cin>>studArray[i].idNum;

      //set the total equal to zero and will use to find the average of test score
      double total=0;

      //asks the user for the score of each test
      for(int j=0;j<numOfTests;j++)
        {
          cout<<"Please enter test score "<<j+1<<": ";
          cin>>studArray[i].test[j];

          //while loop to make sure that the user enters a score that is valid 1-100
          while(studArray[i].test[j]<0 || studArray[i].test[j]>100)
            {
              cout<<"The Test Score has to be between 0 and 100"<<endl;
              cin>>studArray[i].test[j];
            }
          //adds to the total to find the average
          total += studArray[i].test[j];
        }
      //find the average
      studArray[i].average=total/numOfTests;

      //if statements to find the letter grade that was earned
      if(studArray[i].average >=91 && studArray[i].average <=100)
        studArray[i].grade= 'A';
      else if(studArray[i].average >= 81 && studArray[i].average <= 90)
        studArray[i].grade= 'B';
      else if(studArray[i].average >= 71 && studArray[i].average <= 80)
        studArray[i].grade= 'C';
      else if(studArray[i].average >= 61 && studArray[i].average <= 70)
        studArray[i].grade= 'D';
      else 
        studArray[i].grade= 'F';
    }
  
  cout<<"\nThe information for each student is:"<<endl;
  //display to the user the information for each student
  for(int i=0;i<students;i++)
    {
      cout<<"\nName: "<<studArray[i].name<<endl;
      cout<<"ID Number: "<<studArray[i].idNum<<endl;
      cout<<"Test Average: "<<fixed<<setprecision(2)<<studArray[i].average<<endl;
      cout<<"Grade:"<<studArray[i].grade<<endl;
    }
  delete[] studArray;
}
