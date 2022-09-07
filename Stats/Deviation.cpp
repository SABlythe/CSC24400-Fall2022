#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	string fileName;

	cout << "What is the name of the input file? ";
	cin >> fileName;

	ifstream myStream(fileName); // not compiling? Try fileName.c_str()

	double sum =0;
	int numValues=0;
	
	double values [10000];
	myStream >> values[numValues];
	
	while ( myStream )
	{
		sum += values[numValues]; 
		numValues++;
		
		myStream >> values[numValues];
	}
	
	double mean = sum/numValues;
	
	double varianceSum=0;
	
	for (int index =0; index< numValues; index++) 
	{
		double delta = values[index] - mean; 
		varianceSum += delta * delta;
	}
	
	double stddev = sqrt( varianceSum/(numValues-1) );  
	 
	cout << "standard deviation = " << stddev << endl;
	
	return 0;
}

















