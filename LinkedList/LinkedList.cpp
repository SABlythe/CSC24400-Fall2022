#include "LinkedList.hpp"

using namespace std;

void 
LinkedList::add(int newValue)
{
	ListNode *newNode = new ListNode(newValue);
	
	// "magic" to put newNode into the list
	
	_head = newNode; // not quite right ... we will fix next class
	
}

ostream& operator<<(ostream &os, const LinkedList &list)
{
	ListNode *curr;
	curr = list._head;
	
	while (curr!=NULL)
	{
		os << *curr << " ";  // or could use:  os << curr->element() << " "; 
		
		curr = curr -> next();
	}
	
	return os;
}









