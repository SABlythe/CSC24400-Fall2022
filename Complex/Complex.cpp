#include "Complex.hpp"

using namespace std;

void 
Complex::print()
{
	cout << _real << " + " << _imaginary << "i";
}

Complex 
Complex::operator+(Complex otherNumber)
{
	Complex answer (_real + otherNumber._real, 
						 _imaginary + otherNumber._imaginary);
	
	return answer;
}

Complex 
Complex::operator*(Complex other)
{
	Complex answer;
	
	answer._real = _real* other._real - _imaginary*other._imaginary;
	answer._imaginary = _real * other._imaginary +
			    _imaginary * other._real; 
	
	return answer;
}
	
	
	
	
