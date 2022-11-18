#include <iostream>

#include "BinaryTree.hpp"

using namespace std;

int main (int argc, char *argv[])
{
	BinaryTree b;
	
	for (int i=1; i<argc; i++)
		b.insert(argv[i]);
	
	/*	
	string request;
	cout << "Look for?" ; 
	cin >> request;
	
	while(request!="q")
	{
		cout << b.find(request) << endl;	
		cout << "Look for?" ; 
		cin >> request;
	}
	*/
	cout << b; 
	
	string delMe;
	cout << "Delete what?" ; 
	cin >> delMe;
	
	while(delMe!="q")
	{
		b.remove(delMe);
		cout << b << endl;	
		cout << "Delete what?" ; 
		cin >> delMe;
	}
	
	return 0;
}