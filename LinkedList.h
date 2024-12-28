// A class template for holding a linked list.
#ifndef LinkedList_H
#define LinkedList_H
#include <iostream> // For cout
//#include "NumberList.h"
using namespace std;

class LinkedList
{
 	private:
 	// Declare a structure for the list.
 	struct ListNode
 	{
 		int value; // The value in this node
 		struct ListNode *next; // To point to the next node
 	};
 	ListNode *head; // List head pointer

 	public:
 		// Constructor
 		LinkedList()
 		{ 
      head = nullptr; 
    }

 		// Destructor
 		~LinkedList();

 		// Linked list operations
 		void appendNode(int);
 		void insertNode(int);
 		void deleteNode(int);
    void reverseList();
    int locate(int);
    void insertAt(int,int);
    void removeFrom(int);
		void displayList() const;
 }; 
 #endif
