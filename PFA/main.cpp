#include <iostream>

using namespace std;

#include "PFA.hpp"

int main(int argc, char *argv[])
{
	PFA myArr;
	
	
	for (int i=1; i< argc; i++)
	{	
		int newVal = atoi (argv[i]);
		if (myArr.add(newVal))
			cout << "Yes, " << newVal << " added!" << endl;
		else
			cout << "Uh, oh ... add failed for " << newVal << "!";
	}	
	myArr.sort();	
	
	cout << myArr << endl;
	return 0;
}