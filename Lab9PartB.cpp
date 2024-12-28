#include <iostream>
#include<iomanip>
using namespace std;
struct TaxPayer
{
  string lastName;
  float taxRate;
  float income;
  float taxes;
};
int main() 
{
  const int size=5;
  TaxPayer citizen[size];
  cout<<"Please enter the annual income and tax rate for 5 payers"<<endl;
  //ask the user for the information
  for(int i=0;i<size;i++)
    {
      cout<<"\nEnter the name of tax payer "<<i+1<<": ";
      cin>>citizen[i].lastName;
      cout<<"Enter this years income for tax payer "<<i+1<<": ";
      cin>>citizen[i].income;
      cout<<"Enter this years tax rate for tax payer # "<<i+1<<": ";
      cin>>citizen[i].taxRate;
      
    }
  //Finds the income due 
  for(int i=0;i<size;i++)
    citizen[i].taxes=citizen[i].income*citizen[i].taxRate;
  
  cout<<"Taxes due for this year"<<endl;
  cout<<" "<<endl;
  //display the last and tax amount due
  for(int i=0;i<size;i++)
    {
    cout<<citizen[i].lastName<<": $"<<citizen[i].taxes<<endl;
      //always showd 2 places after decimal
     cout<<fixed<<setprecision(2)<<endl;
    }
}