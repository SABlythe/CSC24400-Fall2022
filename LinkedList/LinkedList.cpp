#include "LinkedList.hpp"

using namespace std;

void 
LinkedList::add(int newValue)
{
	ListNode *newNode = new ListNode(newValue);
	
	newNode -> next() = _head;
	
	_head = newNode;
	
	// adding at front, so if head is only item, newNode is the only node
	if (_head->next() == NULL) 
		_tail = newNode;	
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

ListNode* 
LinkedList::find(int value) const
{
	ListNode *curr;
	curr = _head;
	
	while (curr!=NULL)
	{
		if (curr->element() == value)
			return curr;
		curr = curr -> next();
	}
	return NULL; // did not find what we are looking for ...
}

ListNode* findPrev(ListNode *findMe, ListNode *fromHead)
{
	if (findMe==NULL || fromHead==NULL)
		return NULL;
		
	ListNode *curr = fromHead;
	
	while (curr!=NULL)
	{
		if (curr->next() == findMe)
			return curr;
		curr=curr->next();	
	}
	return NULL; // may need to fix up
}
void 
LinkedList::remove(ListNode *node)
{
	if (!node)
		return;
	
	ListNode *prev = findPrev(node, _head); //= ????
	
	if (node!=_head && node!=_tail)	// make sure we are a middle node !!!
	{
		prev->next() = node -> next();
	}
	else if (node == _head)
	{
		_head= _head->next(); // or _head = node->next();
		
		if (_head ==NULL) // we just removed the only node in the list!
			_tail = NULL;
	}
	else // if (node == _tail)
	{
		prev->next() = node -> next(); // or prev->next() = NULL;
		_tail = prev;
	}
}

void 
LinkedList::remove(int value)
{
	remove(find(value)); // ADDED THIS AFTER CLASS SO YOU CAN SEE MIDDLE VALUES REMOVED
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









