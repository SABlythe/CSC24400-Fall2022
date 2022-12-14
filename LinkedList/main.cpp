#include "LinkedList.hpp"
#include "ListNode.hpp"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	/*
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
	*/
	
	LinkedList myList;
	
	cout << "The list should start empty {" << myList << "}" << endl;	
	
	myList.add(5);
	
	cout << "The list should have only 5 in it {" << myList << "}" << endl;		
	
	myList.add(2);
	
	cout << "The list should have 2 and 5 in it {" << myList << "}" << endl;		
	
	for (int index=1; index < argc; index++)
	{
		myList.addTail( atoi(argv[index]) );
	}

		
	cout << "List is now: {" << myList << "}" << endl;
	
	cout << "Enter a value to search for (-1 to stop):" ;
	int value;
	cin >> value;
	
	while (value!=-1)
	{
		cout << myList.find(value);
		
		cout << "Enter a value to search for (-1 to stop):" ;	
		cin >> value;
	}
	
	cout << "List is now: {" << myList << "}" << endl;
	cout << "Enter a value to delete (-1 to stop):" ;
	cin >> value;
	
	while (value!=-1)
	{
		myList.remove(value);
		cout << "List is now: {" << myList << "}" << endl;
		
		cout << "Enter a value to delete (-1 to stop):" ;	
		cin >> value;
	}	
	
	return 0;
}












