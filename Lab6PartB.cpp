//COSC 1436 Introduction to Problem Solving with Computers
//Spring 2023
//Lab 6 Part A
//Strings

#include <iostream>

using namespace std;
void getAverage(int,int);
void getLargest(int,int);
int main()
{
    int numOfValues;
    int choice;
    char question;
    do{
    cout<<"Enter the number of values to be processed"<<endl;
    cin>>numOfValues;
    int array[numOfValues];
    int *arr;
    arr=array;
    while(numOfValues<=0)
    {
        cout<<"Invalid Input!Please enter the a value greater than 0"<<endl;
        cin>>numOfValues;
    }
    cout<<"Please enter the values:";
    for(int i=0;i<numOfValues;i++)
        cin>>array[i];
    for(int i=0;i<numOfValues;i++)
        cout<<array[i]<<" ";
    cout<<"Enter choice:\n";
    cout<<"1. Average \n";
    cout<<"2. Highest\n";
    cout<<"3. Quit\n";
    cin>>choice;
    if(choice==1)
    getAverage(*arr,numOfValues);
    else if(choice==2)
    getLargest(*arr,numOfValues);
    else
    {
    cout<<"Thank you! Have agood day"<<endl;
    cout<<"Enter Y/y if you would like to do it again"<<endl;
    cin>>question;
    }
    }while(question=='Y' || question=='y');
    return 0;
    
}
void getAverage(int *arr,int size)
{
    double average;
    double total;
    for(int i=0;i<size;i++)
    {
        total=total + *(arr+i);
    }
    average=total/size;
    cout<<"The average is"<<average<<endl;
}
void getLargest(int *arr,int size)
{
    int *largest;
    for(int i=0;i<size;i++)
    {
        if(*largest<arr[i])
        {
            largest=&arr[i];
        }
    }
    cout<<"the largest is:"<<largest<<endl;
}