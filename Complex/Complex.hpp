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
	/*Complex(double realPart) 
		{_real = realPart; _imaginary = 0;}*/
	Complex(double realPart, double imaginaryPart) 
		{_real = realPart; _imaginary = imaginaryPart;}
		
	double real() const {return _real;}	
	double& real()  {return _real;}	

	double imaginary() const {return _imaginary;}		
	double& imaginary() {return _imaginary;}	

	
	void print();
	
	const Complex operator+(const Complex &otherNumber) const;
	Complex operator+(double realNumber) const;
	
	Complex operator*(const Complex &otherNumber) const;
	
	friend Complex operator+(double lhs, const Complex &rhs);
	friend std::ostream& operator<<(std::ostream &os, const Complex &c); 
};



#endif






