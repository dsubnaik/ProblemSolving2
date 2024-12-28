#include <iostream>
#include<vector>
using namespace std;
int * appendList(int *,int &,int);
int * appendShiftList(int *, int ,int);
int * modifyList(int *,int,int);
int getFirst(int *);
int getLast(int *, int);
int getMaximum(int *,int);
int getMinimum(int *,int);
void getMode(int *,int);
void displayArray(int *, int);
int main() 
{
  int appendEnd=1;  //used in appendList
  int appendBegin=-1;  //used in appendShiftList
  int arraySize;  
  int position=1; //will use in modifyList
  //display to user
  cout<<"Please enter the size of the array:";
  cin>>arraySize;
  int array[arraySize];
  //make it a pointer array
  int *arrayPtr;
  arrayPtr=array; 
  //store into array
  for(int i=0;i<arraySize;i++)
    {
      cout<<"Please enter number "<<i+1<<": ";
      cin>>array[i];
    }
  //fucntion calls
  getMode(arrayPtr,arraySize);
  appendList(arrayPtr,arraySize, appendEnd);
  displayArray(arrayPtr,arraySize);
  appendShiftList(arrayPtr,arraySize,appendBegin);
  displayArray(arrayPtr,arraySize);
  modifyList(arrayPtr,arraySize,position);
  cout<<"\nThe first element in the list is: ";
  cout<<getFirst(arrayPtr);
  cout<<"\nThe maximum element in this list is: ";
  cout<<getMaximum(arrayPtr,arraySize)<<endl;
   displayArray(arrayPtr,arraySize);
  cout<<"\nThe last element in this list is: ";
  cout<<getLast(arrayPtr,arraySize);
  cout<<"\nThe minimum element in this list is: ";
  cout<<getMinimum(arrayPtr,arraySize)<<endl;
  getMode(arrayPtr,arraySize);
  }
//this function adds 1 to the end of the array
//returns the pointer to the updated array
int *appendList(int *arrayPtr,int &size,int appendEnd)
{
  appendEnd=1;
  int array2[100];
  array2[size]=appendEnd;
  for(int i=0;i<size;i++)
    array2[i]=arrayPtr[i];
  array2[size]=appendEnd;//set 1 equal to last element of array
  size=size+1;
  return array2;
}
//this function adds -1 to beginning of the array
//returns the pointer to the updated array
int *appendShiftList(int *arrayPtr,int size,int appendBegin)
{
  int array2[100];
  int j=0;
  for(int i=1;i<size+1;i++)
    {
      array2[i]=arrayPtr[j];
      j++;
    }
   arrayPtr[0]=appendBegin;//sets -1 to first element of array
  return array2;
}
//changes the second element of list to -1
int *modifyList(int *arrayPtr,int size,int position)
{
  arrayPtr[position]=-1;
  return arrayPtr;
}
//this function returns the first element of the array
int getFirst(int *arrayPtr)
{
  return arrayPtr[0];
}
//this function returns the last element of the array
int getLast(int *arrayPtr, int size)
{
  return arrayPtr[size-1];
}
//this function finds the maximum element in the array
int getMaximum(int *arrayPtr,int size)
{
  int maximum=arrayPtr[0];
  for(int i=0;i<size;i++)
    {
      if(arrayPtr[i]>maximum)
        maximum=arrayPtr[i];
    }
  return maximum;
}
//this function finds the minimum element in the array
int getMinimum(int *arrayPtr,int size)
{
  int minimum=arrayPtr[0];
  for(int i=0;i<size;i++)
    {
      if(arrayPtr[i]<minimum)
        minimum=arrayPtr[i];
    }
  return minimum;
}
//this function finds the mode/modes of the array
void getMode(int * arrayPtr,int size)
{
  int mode;
  int count=0;
  for(int j=0;j<size;j++)
    {
     mode=arrayPtr[j];
     for(int i=1;i<size;i++)
      {
        if(mode == arrayPtr[i])
        {
          count++;
          mode=arrayPtr[i];
          }
        
      }
      }
  if(count==0)
    cout<<"There is no mode"<<endl;
  else
    cout<<"The mode is "<<mode<<endl;
}
//displays contents in array
void displayArray(int * arrayPtr,int size)
{
  for(int i=0;i<size;i++)
    cout<<arrayPtr[i]<<" ";
  cout<<endl;
}
//this is not my best work I have had family visiting all week and it has been difficult to get anything done in any of my classes