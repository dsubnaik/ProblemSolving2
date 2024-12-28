#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
   // TODO: Define a LinkedList object.
    LinkedList myList;
   // TODO: Append some values to the list.
  //part a
   /* myList.appendNode(18);
    myList.appendNode(21);
    myList.appendNode(8);*/
   // TODO: Display the contents of the list.
  //part a
   //myList.displayList();
  myList.appendNode(3);
  myList.appendNode(5);
  myList.appendNode(7);
  myList.displayList();
  myList.reverseList();
  myList.displayList();
  myList.removeFrom(99);
  myList.appendNode(10);
  cout<<"calling locate "<<myList.locate(2)<<endl;
  myList.removeFrom(1);
 // myList.appendNode(11);
 // myList.displayList();
  //myList.deleteNode(7);
 myList.displayList();
  
   return 0;
}