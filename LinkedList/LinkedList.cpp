#include "LinkedList.hpp"

using namespace std;

void 
LinkedList::add(int newValue)
{
	ListNode *newNode = new ListNode(newValue);
	
	newNode -> next() = _head;
	
	_head = newNode;
	
}
void 
LinkedList::addTail(int newValue)
{
	ListNode *newNode = new ListNode(newValue); // constructor sets next to NULL

	if (_tail!=NULL)
	{
		// only works when list already has data ...
		_tail->next() = newNode;
		_tail = newNode;
	}
	else
	{
		_tail = newNode;	
		_head = newNode;	
	}
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









