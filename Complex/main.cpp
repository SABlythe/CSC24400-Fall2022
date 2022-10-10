#include <iostream>

#include "Complex.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	Complex zeroVar;
	Complex actuallyReal(4.2, 0 );
	Complex full(2.8, -9.1), another(74, 30);
	Complex answer;
	
	full.print(); cout << endl;
	zeroVar.print(); cout << endl;
	actuallyReal.print(); cout << endl;
	
	answer = full * another;   // did not work! 
	answer = actuallyReal + another * full; 
	//answer = full.operator+(another); 
	
	double notComplex = 14.1;
	answer = full + notComplex;	
	
	answer.print(); cout << endl;
	
	
	answer = notComplex + full;	
	
	answer.print(); cout << endl;	
	

	cout << "The complex number is :" << answer << endl; 

	cout << "The imaginary part is: " << answer.imaginary() << endl;
	cout << "The real part is: " << answer.real() << endl;
	
	answer.imaginary() = 3.1416;
	cout << "The complex number is now:" << answer << endl; 
		
	
	return 0;
}













