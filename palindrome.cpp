//lab 13 part b

#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

bool palindrome(string,int, int);//function prototype
int main() 
{
  string words;
  //recieve words from user
  cout<<"Please enter a word and I will test if it is a palindrome"<<endl;
  getline(cin, words);//getline so it can read spaces

  //remove all punctuation and spaces
  words.erase(remove_if(words.begin(),words.end(),::ispunct),words.end());
  words.erase(remove_if(words.begin(),words.end(),::isspace),words.end());
  
  int end=words.length()-1;//subtract 1 because string works like arrays when checking each element
  
  int start=0;//beginning of string for checking purposes
  
  if(palindrome(words, start, end))//pass the string, beginnig, and length of string -1;
    cout<<words<<" is a palindrome"<<endl;
    
  else//if palindrome function is false
    cout<<words<<" is not a palindrome"<<endl;
}

//palindrome function returns true if it is a palindrome and false if it is not a palindrome
bool palindrome(string words, int start, int end)
{
    if(start==end)//if the start and end are equal then every element is equal to each other so the string is a palindrome
      return true;
    if(words[start] != words[end])//if any element is not equal ten it is not a palindrome
      return false;
  
    return palindrome(words,++start,--end);//call palindrome until either true or false increment start and end increment 


  
}