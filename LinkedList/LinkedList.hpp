#ifndef _LINKED_LIST_HPP_
#define _LINKED_LIST_HPP_

#include <iostream>

#include "ListNode.hpp"

class LinkedList
{
private:
	ListNode *_head;
	ListNode *_tail;
public:
	LinkedList() : _head(NULL), _tail(NULL) {}
	
	void add(int newValue);	
	void addTail(int newValue);	
	
	ListNode* find(int value) const;
	void remove(ListNode *node);
	void remove(int value);	
	
	friend std::ostream& operator<<(std::ostream &os, const LinkedList &list);	
};

#endif