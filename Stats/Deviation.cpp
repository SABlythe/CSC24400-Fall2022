#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	string fileName;

	cout << "What is the name of the input file? ";
	cin >> fileName;

	ifstream myStream(fileName); // not compiling? Try fileName.c_str()

	double val;
	myStream >> val;

	return 0;
}
