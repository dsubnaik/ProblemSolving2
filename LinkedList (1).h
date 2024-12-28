#ifndef LinkedList_H
#define LinkedList_H

class LinkedList
{
private:
   // TODO: Declare a structure for the list
   struct ListNode
   {
      double value;
      ListNode *next;
   };


  // TODO: Declare a List head pointer
    ListNode *head;

public:
   // Constructor
   LinkedList();
      
   // Destructor
   ~LinkedList();
      
   // Linked list operations
   void appendNode(double);
   void deleteNode(double);
   void reverseList();
   int locate(int);
   void removeFrom(int);
   void displayList() const;
    
};
#endif