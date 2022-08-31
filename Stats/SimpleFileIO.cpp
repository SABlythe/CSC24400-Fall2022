#include <fstream>
#include <iostream>
 
using namespace std;

int main(int argc, char* argv[])
{
	ifstream ifile("data.txt");

	if (!ifile)
	{
		cout << "File could not be opened for reading !";
		return 1;
	}

	double sum = 0;
	unsigned int numValues=0;

	double nextVal;

	ifile >> nextVal;

	while (ifile)
	{
		numValues++;
		sum += nextVal;

		ifile >> nextVal;
	}

	cout << "The average of all things is : " << sum/numValues << endl;

	return 0;
}
