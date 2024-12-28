#include<iostream>
using namespace std;
#include "LinkedList.h"

//**************************************************
 // appendNode appends a node containing the value *
 // passed into newValue, to the end of the list. *
 //**************************************************

 
 void LinkedList::appendNode(int newValue)
 {
 	ListNode *newNode; // To point to a new node
 	ListNode *nodePtr; // To move through the list

 	// Allocate a new node and store num there.
 	newNode = new ListNode;
 	newNode->value = newValue;
 	newNode->next = nullptr;

 	// If there are no nodes in the list
 	// make newNode the first node.
 	if (!head)
 		head = newNode;
 	else // Otherwise, insert newNode at end.
 	{
 		// Initialize nodePtr to head of list.
 		nodePtr = head;
 		// Find the last node in the list.
 		while (nodePtr->next)
 		nodePtr = nodePtr->next;

 		// Insert newNode as the last node.
 		nodePtr->next = newNode;
 	}
 }

 //**************************************************
 // displayList shows the value *
 // stored in each node of the linked list *
 // pointed to by head. *
 //**************************************************

 
 void LinkedList::displayList() const
 {
 	ListNode *nodePtr; // To move through the list

 	// Position nodePtr at the head of the list.
 	nodePtr = head;

 	// While nodePtr points to a node, traverse
 	// the list.
 	while (nodePtr)
 	{
 		// Display the value in this node.
 		cout << nodePtr->value << endl;

 		// Move to the next node.
 		nodePtr = nodePtr->next;
 	}
 }

 //**************************************************
 // The insertNode function inserts a node with *
 // newValue copied to its value member. *
 //**************************************************

 
 void LinkedList::insertNode(int newValue)
 {
 	ListNode *newNode; // A new node
 	ListNode *nodePtr; // To traverse the list
 	ListNode *previousNode = nullptr; // The previous node

 	// Allocate a new node and store num there.
 	newNode = new ListNode;
 	newNode->value = newValue;

 	// If there are no nodes in the list
 	// make newNode the first node
 	if (!head)
 	{
 		head = newNode;
 		newNode->next = nullptr;
 	}
 	else // Otherwise, insert newNode.
 	{
 		// Position nodePtr at the head of list.
 		nodePtr = head;

 		// Initialize previousNode to nullptr.
 		previousNode = nullptr;

 		// Skip all nodes whose value is less than num.
 		while (nodePtr != nullptr && nodePtr->value < newValue)
 		{
 			previousNode = nodePtr;
 			nodePtr = nodePtr->next;
 		}

 		// If the new node is to be the 1st in the list,
 		// insert it before all other nodes.
 		if (previousNode == nullptr)
 		{
 			head = newNode;
 			newNode->next = nodePtr;
 		}
 		else // Otherwise insert after the previous node.
 		{
 			previousNode->next = newNode;
 			newNode->next = nodePtr;
 		}
 	}
 }

 //******************************************************
 // The deleteNode function searches for a node *
 // with searchValue as its value. The node, if found, *
 // is deleted from the list and from memory. *
 //******************************************************

 
 void LinkedList::deleteNode(int searchValue)
 {
 	ListNode *nodePtr; // To traverse the list
 	ListNode *previousNode; // To point to the previous node

 	// If the list is empty, do nothing.
 	if (!head)
 		return;

 	// Determine if the first node is the one.
 	if (head->value == searchValue)
  	{
 		nodePtr = head->next;
 		delete head;
 		head = nodePtr;
 	}
 	else
 	{
 		// Initialize nodePtr to head of list.
 		nodePtr = head;

 		// Skip all nodes whose value member is
 		// not equal to num.
 		while (nodePtr != nullptr && nodePtr->value != searchValue)
 		{
 			previousNode = nodePtr;
 			nodePtr = nodePtr->next;
 		}

 		// If nodePtr is not at the end of the list,
 		// link the previous node to the node after
 		// nodePtr, then delete nodePtr.
 		if (nodePtr)
 		{
 			previousNode->next = nodePtr->next;
 			delete nodePtr;
 		}
 	}
 }

// this reverseList function reverses the contents of the list
void LinkedList :: reverseList()
{
  cout<<"Reversed the list"<<endl;
  
  ListNode *previousNode;//to point to the previous node
  ListNode *nextNode;//to point to next node
  ListNode *currentNode;//to traverse the list 
  
  previousNode=nullptr;// set the previous node equal to nullptr
  nextNode=nullptr;//set the next node equal to nullptr
  currentNode=head;//set the current node equal to the beginning node

  //reverses the list
  while(currentNode != nullptr)
    {
      nextNode=currentNode->next;
      currentNode->next=previousNode;
      previousNode=currentNode;
      currentNode=nextNode;
    }
  //last element of linked list
  head=previousNode;
  
}

//this locate function finds the position of which num is located in the linked list
int LinkedList :: locate(int num)
{
  int i=0;//counter
  ListNode *nodePtr;
  nodePtr=head;
  //if the list is empty
  if(nodePtr==nullptr)
    cout<<"the list is empty"<<endl;
  else
  {
    while(nodePtr)//while nodePtr is not null
      {
        //checks if the value in the linked list is equal to num
        if(nodePtr->value==num)
        {
          return i;
        }
        i++;//increase counter when num is not found
        nodePtr=nodePtr->next;//traversing throught the list
      }
    return -1;//if the num is not in the list -1 will be returned
  }
}
//insert a node at a specific position
void LinkedList :: insertAt(int node, int pos)
{
  //the position has to be greater than 0
  if(pos<0)
  {
    cout<<"position has to be at least zero\n";
    return ;
  }
  
  ListNode *newNode = new ListNode;//create a new node
  newNode -> value= node;//set the newNode equal to the node value
  newNode->next=nullptr;
  ListNode *previousNode =head;
  //if tbe position equals 0
  if(pos==0)
  {
    newNode->next=head;
    head=newNode;
    return;
  }
  //when it is not the first position
  else
  {
    for(int i=1;i<pos-1;i++)
      {
        if(previousNode !=nullptr)
        {
          previousNode=previousNode->next;
        }
      }
  }
//when the position is the last element od the linked list
  if( previousNode  !=nullptr)
  {
    newNode->next =previousNode->next;
    previousNode->next=newNode;
  }
  
}
//this remove from function will remove a node at specific value
void LinkedList :: removeFrom(int pos)
{
  ListNode *nodePtr;
  ListNode *previousNode;
  //if the list is empty nothing happens
  if(head==nullptr)
    return;
  previousNode=head;
  //if the position is zero 
  if(pos==0)
  {
    nodePtr=head->next; 
    delete head;//delete the node
    head= nodePtr;
    return;
  }
  //traverse the list 
  for(int i=0;i<pos-1 && previousNode;i++)
    {
      nodePtr=previousNode;
      previousNode=previousNode->next;
    }
  //if position is the last element
  if(previousNode)
  {
    nodePtr->next=previousNode->next;
    delete previousNode;
  }
  
}

 //**************************************************
 // Destructor *
 // This function deletes every node in the list. *
 //**************************************************

 
 LinkedList::~LinkedList()
 {
 	ListNode *nodePtr; // To traverse the list
 	ListNode *nextNode; // To point to the next node

 	// Position nodePtr at the head of the list.
 	nodePtr = head;

 	// While nodePtr is not at the end of the list...
 	while (nodePtr != nullptr)
 	{
 		// Save a pointer to the next node.
 		nextNode = nodePtr->next;

 		// Delete the current node.
 		delete nodePtr;
 		// Position nodePtr at the next node.
 		nodePtr = nextNode;
 	}
 }