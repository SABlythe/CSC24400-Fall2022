#ifndef _LINKED_LIST_HPP_
#define _LINKED_LIST_HPP_

#include <iostream>

#include "ListNode.hpp"

class LinkedList
{
private:
	ListNode *_head;
public:
	LinkedList() : _head(NULL) {}
	
	void add(int newValue);	
	
	friend std::ostream& operator<<(std::ostream &os, const LinkedList &list);	
};

#endif