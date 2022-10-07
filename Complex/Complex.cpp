#include "Complex.hpp"

using namespace std;

void 
Complex::print()
{
	cout << _real << " + " << _imaginary << "i";
}

const Complex 
Complex::operator+(const Complex &otherNumber) const
{
	Complex answer (_real + otherNumber._real, 
						 _imaginary + otherNumber._imaginary);


		
	return answer;
}

Complex 
Complex::operator+(double realNumber) const
{
	Complex answer;
	answer._real = _real + realNumber;
	answer._imaginary = _imaginary;
	

	
	return answer;
}


Complex 
Complex::operator*(const Complex &other) const
{
	Complex answer;
	
	answer._real = _real* other._real - _imaginary*other._imaginary;
	answer._imaginary = _real * other._imaginary +
			    _imaginary * other._real; 
	
	return answer;
}
	
Complex operator+(double lhs, const Complex &rhs)
{
		Complex answer;
		/* could do the following - it will work! 
		answer._real = rhs._real + lhs;
		answer._imaginary = rhs._imaginary;
		*/
		answer = rhs + lhs; 
		// be careful --- this is NOT answer = lhs + rhs; 
	
		return answer;
}	

ostream& operator<<(ostream &os, const Complex &c)
{
	os << c._real << " + " << c._imaginary << "i";
	
	return os;
}



	
	
