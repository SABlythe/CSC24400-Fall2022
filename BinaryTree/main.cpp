#include <iostream>

#include "BinaryTree.hpp"

using namespace std;

int main (int argc, char *argv[])
{
	BinaryTree b;
	
	for (int i=1; i<argc; i++)
		b.insert(argv[i]);
		
	string request;
	cout << "Look for?" ; 
	cin >> request;
	
	while(request!="q")
	{
		cout << b.find(request) << endl;	
		cout << "Look for?" ; 
		cin >> request;
	}
	return 0;
}