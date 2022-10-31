#include "ListNode.hpp"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	ListNode node(6);

	cout << "node is " << node << endl;
	cout << "node's element is " << node.element() << endl;
	cout << "node's next is " << node.next() << endl;
	
	node.element() = 42;
		
	cout << "node is " << node << endl;
	cout << "node's element is " << node.element() << endl;
	cout << "node's next is " << node.next() << endl;
	
	node.next() = &node;
	
	cout << "node is " << node << endl;
	cout << "node's element is " << node.element() << endl;
	cout << "node's next is " << node.next() << endl;	
	
	return 0;
}