//********************************************************************
//Name:Derrick Subnaik
//Class: COSC 1436 Spring2023
//Instructor: Habib Senol
//Homework 3
//Date: 2-26-2023
//Program description: Encrypted words
//********************************************************************
#include <iostream>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
  string words;
  //asks the user to enter a string
  cout<<"Lets encrypt some words"<<endl;
  cout<<"Enter a phrase you will like encrypted"<<endl;
  getline(cin,words);

  //erase all punctuation
  words.erase(remove(words.begin(),words.end(),','),words.end());
  words.erase(remove(words.begin(),words.end(),'.'),words.end());
  words.erase(remove(words.begin(),words.end(),'?'),words.end());     
  words.erase(remove(words.begin(),words.end(),'!'),words.end());
  words.erase(remove(words.begin(),words.end(),';'),words.end());
  words.erase(remove(words.begin(),words.end(),':'),words.end());
  
  stringstream ss(words); //this is used to tokenize the string
  string token;
   cout<<"The enrypted words are:"<<endl;
  //while loop used to go through each token and display the encrypted words
  while(getline(ss,token,' '))
    {
//if the tokenized string 3 or less letters 
      if(token.length()<=3)
      {
        cout<<"%";// will display before string
        //this for loop displays the string in reverse order
        for(int i=token.length();i>=0;i--)
          {
            cout<<token[i];
          }
          cout<<"%";//will display after reverse order string
      }
//if the tokenized string starts with a vowel
      else if(token[0]=='a'||token[0]=='e'||token[0]=='i'||token[0]=='o'||token[0]=='u')
        {
            string lastThree="";
            cout<<"#";
          //sets the last three elements of string equal to last three string
            for (int i = token.length() - 3; i < token.length(); i++) 
            { 
                lastThree += token[i];
            }
          //moves elements in string over three spots right 
            for (int i = token.length() - 4; i >= 0; i--) 
            { 
                token[i + 3] = token[i];
            }
          //sets lastThree string to beginning of string
            for (int i = 0; i < 3; i++) 
            { 
                 token[i] = lastThree[i];
            }
              cout<<token;
        }
//if the tokenized string starts with a consonant
      else
      {
        string firstThree="";
        //sets the first three elements of string equal to firstThree
       for (int i = 0; i < 3; i++) 
        { 
        firstThree += token[i];
        }
        //moves rest of elements of string 3 elements left
        for (int i = 0; i < token.length() - 3; i++) 
        { 
        token[i] = token[i + 3];
        }
        //sets the beginning of string equal to firstThree
        for (int i = 0; i < 3; i++) 
        {
        token[token.length() - 3 + i] = firstThree[i];
        }
        //display to user
        cout << token;
        cout<<"$";
      }
      
    }
  cout<<"\nThank you !"<<endl;
}