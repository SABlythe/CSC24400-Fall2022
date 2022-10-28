#ifndef _LIST_NODE_HPP_
#define _LIST_NODE_HPP_

class ListNode
{
private:
	int _element;
	ListNode *_next;
public:
	ListNode(int value) : _element(value),  _next(NULL) {}
	
	
};

#endif