#include <iostream>

using namespace std;

int fact(int n)
{
	if (n<=0)
		return 1;
	else 
		return n * fact(n-1);
}

int main (int argc, char *argv[])
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	int answer = fact(number);
	
	cout << answer<< endl; 
	
	return 0;
}