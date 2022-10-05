#include <iostream>

#include "Complex.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	Complex zeroVar;
	Complex actuallyReal(4.2);
	Complex full(2.8, -9.1), another(74, 30);
	Complex answer;
	
	full.print(); cout << endl;
	zeroVar.print(); cout << endl;
	actuallyReal.print(); cout << endl;
	
	answer = full * another;   // did not work! 
	answer = actuallyReal + another * full; 
	//answer = full.operator+(another); 
	
	answer.print(); cout << endl;
	
	return 0;
}