#include <iostream>
#include<cstring>
#include<cstdlib>
#include<cctype>
using namespace std;
int main()
{
  string numbers;
  cout<<"Enter a string of numbers with NO spaces:"<<endl;
  cin>>numbers;
int array[numbers.size()];
int arrayTwo;
for(int i=0;i<numbers.length();i++)
  {
  array[i]=atoi(numbers[i]);
  if(isdigit(array[i]))
    arrayTwo[i]=arrayOne[i];
    }
//  for(int i=0;i<numbers.length();i++)
  //  {
    //  if(isdigit(numbers[i]))
    //    array[i]=numbers[i];
     // }
 // cout<<array[0];
  int total=0;
  for(int i=0;i<numbers.length();i++)
    {
      total+=array[i];
    }
  cout<<"the sum of those digits are ";
  cout<<total<<endl;
  int highest=array[0];
  for(int i=0;i<numbers.length();i++)
    {
      if(highest>array[i])
        highest=array[i];
    }
  cout<<"the highest digit is ";
  cout<<highest<<endl;
  int lowest=array[0];
  for(int i=0;i<numbers.length();i++)
    {
      if(lowest<array[i])
        lowest=array[i];
    }
  cout<<"the lowest digit is  ";
  cout<<lowest;
}