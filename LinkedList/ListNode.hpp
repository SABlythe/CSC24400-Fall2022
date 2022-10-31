#ifndef _LIST_NODE_HPP_
#define _LIST_NODE_HPP_

#include <iostream>

class ListNode
{
private:
	int _element;
	ListNode *_next;
public:
	ListNode(int value) : _element(value),  _next(NULL) {}
	
	int element() const {return _element;} // accessor
	int & element() {return _element;}      // modifier
	
	ListNode* next() const {return _next;}    // accessor
	ListNode* & next() {return _next;}
	
	friend std::ostream& operator << (std::ostream &os, const ListNode &ln); 
};

#endif