#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "argc is:" << argc << endl;
	
	for (int index =0 ; index < argc; index++)
	{
		char *currArg = argv[index];
		cout << currArg; // surprise! won't print address ...
		                 // c++ is "smart" enough to print as string
		cout << endl;
	}
	return 0;
}