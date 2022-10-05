#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <iostream>

class Complex
{
private:
	double _real;
	double _imaginary;
public:
	Complex() {_real = _imaginary = 0;}
	Complex(double realPart) 
		{_real = realPart; _imaginary = 0;}
	Complex(double realPart, double imaginaryPart) 
		{_real = realPart; _imaginary = imaginaryPart;}
		
	void print();
	
	Complex operator+(Complex otherNumber);
	Complex operator*(Complex otherNumber);
	
};

#endif