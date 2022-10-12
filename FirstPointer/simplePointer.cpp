#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int value =7;
	int *myPtr;
	myPtr = & value;
	//myPtr = new int;	
	
	cout << value << endl;
	cout << *myPtr << endl;

	// causes crash later due to invalid address (34=0x22)
	//myPtr = (int *) 34;
	*myPtr = 34; 
	
	cout << myPtr << endl;
	cout << *myPtr << endl;	
	cout << value << endl;
	
	return 0; 
}