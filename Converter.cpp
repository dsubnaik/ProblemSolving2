#include<iostream>
using namespace std;
#include"Converter.h"


//constructor
Converter::Converter(int number)
{
  input=number;
}
//display the numbers in words

//whenever if(variable!=0) so it doesn't display zero in the middle for example
//1023 will display one thousand zero twenty three will not be displaed
//1023 should be one thousand twenty three
void Converter :: display()
{
  cout<<"The english description is:";
  int x;
  int y;
  int z;
  //for 0
  if(input==0)
    cout<<below20[0];
    //for 1-19
    
  else if(input<20)
    cout<<below20[input];
    
  //for 20-99
  else if(input>=20 && input<100)
  {
    x=input/10;
    if(x!=0)
    cout<<tens[x-1];
    x=input-(x*10);
    if(x!=0)
    cout<<" "<<below20[x];
  }

    //100-999
  else if(input>=100 && input<1000)
  {
    x=input/100;
    if(x!=0)
    cout<<below20[x]<<" "<<hundreds;
    x=input-(100*x);
    y=x;
    y=x/10;
    if(y!=0)
    cout<<" "<<tens[y-1];
    y=x-(y*10);
    if(y!=0)
    cout<<" "<<below20[y];
  }

   //1000-9999 
  else
  {
    x=input/1000;
    if(x!=0)
    cout<<below20[x]<<" "<<thousands;
    x=input-(1000*x);
    y=x;
    y=x/100;
    if(y!=0)
    cout<<" "<<below20[y]<<" "<<hundreds;
    y=x-(100*y);
    z=y;
    z=y/10;
    if(z!=0)
    cout<<" "<<tens[z-1];
    z=y-(z*10);
    if(z!=0)
    cout<<" "<<below20[z];
  }
}

