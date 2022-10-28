#include <fstream>
#include <iostream>

using namespace std;

#include "PFA.hpp"

int main(int argc, char *argv[])
{
	PFA myArr;
	
	string fname = argv[1];
	ifstream dataFile(fname);
	
	dataFile >> myArr;
		
	cout << " ==== BEFORE SORTING ===" << endl
		<< myArr;
		
	myArr.sort();	
	
	cout << " ==== AFTER SORTING ===" << endl
		<< myArr;	
		
	myArr += -686868;  //this->operator+=(-686868);
	
	cout << " ==== AFTER calling overloaded += inside of << ===" << endl
		<< (myArr += 1);		
	
	return 0;
}