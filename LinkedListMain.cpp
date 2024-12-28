// This program demonstrates the linked list template.
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
 //lines 9-30 is what was already in main file when the assignment was assigned 
//LinkedList list;
  
// append three nodes having 2,4, and 6
/*list.appendNode(2); 
list.appendNode(4); 
list.appendNode(6);

cout << "Here are the initial values:\n";
list.displayList();
cout << endl;

// delete a node having 4 
// and insert two new nodes having 3 and 5
list.deleteNode(4);
list.insertNode(3); 
list.insertNode(5); 

// Display the values in the list
cout << "Here are the values after removing 4 and inserting 3 and 5:\n";
list.displayList();
cout << endl;
*/
LinkedList myList;      //create object called myList
//cout<<"My list objects"<<endl;
myList.appendNode(2);//add 2 to the list
myList.appendNode(4);//add 4 to the ist
myList.appendNode(6);//add 6 to the list
myList.insertAt(8,0);//insert 8 at position 0
myList.displayList();//display what's in the list
cout<<"Lets reverse the list"<<endl;
myList.reverseList();//reverse what's in the list
myList.displayList();//display list again
myList.removeFrom(99);//remove 99 99 element in the list if there is a 99 element
myList.insertAt(10,-1);//insert 10 at position -
cout<<"calling locate..."<<myList.locate(5)<<endl;//finds the position number 5 if 5 is in the list
myList.removeFrom(1);//removes 1 from the list if it exists
myList.insertAt(7,1);//inserts 7 at position 1
myList.displayList();//display list one last time
return 0;
}
