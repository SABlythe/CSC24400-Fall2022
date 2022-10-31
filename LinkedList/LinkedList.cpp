#include "LinkedList.hpp"

void 
LinkedList::add(int newValue)
{
	ListNode *newNode = new ListNode(newValue);
	
	// "magic" to put newNode into the list
	
	_head = newNode; // not quite right ... we will fix next class
	
}