#include "orderedLinkedList.h"
#include <iostream>

using namespace std;

int main() 
{
	// two lists needed
	orderedLinkedList<int>    int_ll;
	orderedLinkedList<string> str_ll;

	// adding sample data to lists
	int_ll.insert(1);
	int_ll.insert(2);
	int_ll.insert(3);
	int_ll.insert(4);
	int_ll.insert(5);
	int_ll.insert(6);

	str_ll.insert("apple");	
	str_ll.insert("bear");	
	str_ll.insert("car");	
	str_ll.insert("dinosaur");	
	str_ll.insert("elbow");	
	str_ll.insert("farm");	
	
	/*
	Add the functionality to the class as described
	in the instructions.  Call the new methods on
	both lists. 
	*/
	
	int_ll.recursivePrint();
	cout << endl;
	str_ll.recursivePrint();
	cout << endl;
  
  cout<<"\nreverse print"<<endl;
  int_ll.reversePrint();
  cout<<endl;
  str_ll.reversePrint();
  cout<<endl; 
  
  cout<<"\nevery other"<<endl;
  int_ll.everyOther();
  cout<<endl;
  str_ll.everyOther();
  cout<<endl;
  cout<<"\n The number of nodes are "<<int_ll.countNodes();
  cout<<"\n The number of nodes are " <<str_ll.countNodes();
  cout<<endl;
  if(int_ll.searchNode(3));
    cout<<"Node exists"<<endl;
  if(str_ll.searchNode("drose"))
    cout<<"Node exists"<<endl;
	return 0;
}
