//Derrick Subnaik
//Assignment 5
//Professor: Habib Senol
//Reading data from a file and finding different variables from the file
#include <iostream>
#include<fstream>
#include<vector>
#include<sstream>

using namespace std;
//function prototypes
int wordCount(char *, int);
int characterCount(char *, int);
int capitalCharCount(char *, int);
int letterCount(char *, int);
int numberCount(char *, int);
int specialCharCount(char *, int);
int lineCount(char *, int);
int main()
{
  string fileName;//used for user input
  int size=0;//increase everytime a character is added to array 
  const int maxSize =5000;//file cannot have more than 5000 characters
  char fileElements[maxSize];//character array
  char *ptr=fileElements;//pointer to array
  //ask the user for file name
  cout<<"Please enter the name of the file that is less than 5000 characters"<<endl;
  cin>>fileName;
  
  ifstream myFile(fileName);// ope file
  
  //will display when the user enters a file that is not found
  if(!myFile)
    {
      cout<<fileName<<" has not been found!!!"<<endl;
      cout<<"Come back when you find the file!!!"<<endl;
      return;
    }
  
  //stores characters from file into char array increases size to find elements
  while(!myFile.eof() && size<maxSize)
    {
      myFile.get(fileElements[size]);
      size++;
    }
  
  myFile.close();// close file
  
  //Display to user
  cout<<"\nIn "<< fileName<<" there are "<<endl;
  cout<<"Number of words "<<wordCount(ptr,size)<<endl;
  cout<<"number of characters "<<characterCount(ptr,size)<<endl;
  cout<<"Number of capitalized characters "<<capitalCharCount(ptr,size)<<endl;
  cout<<"Number of letters "<<letterCount(ptr,size)<<endl;
  cout<<"Number of digits "<<numberCount(ptr,size)<<endl;
  cout<<"Number of special characters "<<specialCharCount(ptr,size)<<endl;
  cout<<"Number of lines "<<lineCount(ptr,size)<<endl;
}

//this function accepts the character array and the size and will then find the
//number of words seperated by blank spaces
int wordCount(char *fileElements, int size)
{
  int words=0;
  for(int i=0;i<size;i++)
    {
      if(isspace(fileElements[i]))
        words++;
    }
  return words;
}

//this function accepts the character array and the size and will then find the
//number of characters in the array/file
int characterCount(char *fileElements, int size)
{
  int characters=0;
  for(int i=0;i<size;i++)
    {
      if(isprint(fileElements[i]))
        characters++;
    }
  return characters;
}

//this function accepts the character array and the size and will then find and 
//return number of capital letters in the array/file
int capitalCharCount(char *fileElements, int size)
{
  int caps=0;
  for(int i=0;i<size;i++)
    {
      if(isspace(fileElements[i]))
        caps++;
    }
  return caps;
}

//this function accepts the character array and the size and will then find and 
//return the number of letters in the array/file
int letterCount(char *fileElements, int size)
{
  int letters=0;
  for(int i=0;i<size;i++)
    {
      if(isalpha(fileElements[i]))
        letters++;
    }
  return letters;
}

//this function accepts the character array and the size and will then find and 
//return the amount of numbers in the array/file
int numberCount(char *fileElements, int size)
{
  int numbers=0;
  for(int i=0;i<size;i++)
    {
      if(isdigit(fileElements[i]))
        numbers++;
    }
  return numbers;
}

//this function accepts the character array and the size and will then find and 
//return number of special characters in the array/file
int specialCharCount(char *fileElements, int size)
{
  int special=0;
  for(int i=0;i<size;i++)
    {
      if(ispunct(fileElements[i]))
        special++;
    }
  return special;
}

//this function accepts the character array and the size and will then find and
//return number of lines in the array/file
int lineCount(char *fileElements, int size)
{
  int lines=0;
  for(int i=0;i<size;i++)
    {
      if(fileElements[i]=='\n')
        lines++;
    }
  return lines+1;
}