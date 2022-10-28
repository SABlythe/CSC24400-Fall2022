#include "PFA.hpp"

using namespace std;

#define MAX_SIZE 100

PFA::PFA()
{
	_size = MAX_SIZE;
	_filled = 0;
	_arr = new int[_size];
}

//addItem
bool
PFA::add(int valueToAdd)
{
	if (_filled<_size)
	{	
		_arr[_filled] = valueToAdd;
		_filled++;
	
		return true;
	}
	
	return false;
}

const PFA& 
PFA::operator+= (int rhs)
{
	add(rhs); // (*this).add(rhs);    ...   or .... this->add(rhs); 
	return *this;
}	


void mySwap (int &a, int &b)
{
	int temp = a;
	a=b;
	b=temp;
}
//sort
void 
PFA::sort()
{
	// bubble sort
	bool sorted = false;
	
	do
	{
		sorted = true; // assume we are sorted until proven otherwise
		// look through the array and swap adjacent items that are out of order
		for (unsigned int index =0; index < _filled-1; index++)
		{
			// if current item is out of order with its next item
			if ( _arr[index] > _arr[index+1] )
			{
				sorted=false;
				mySwap (_arr[index], _arr[index+1]);
			}
		}
	}
	while (!sorted);
}	
	
istream& operator>> (istream &is, PFA &arr)
{
	int nextInt;
	is >> nextInt;
	
	while (is)
	{
		arr.add(nextInt);
		
		is >> nextInt;
	}

	return is;
}
ostream& operator<<(ostream &os, const PFA &pfa)
{
	for (unsigned int index =0; index< pfa._filled; index++)
		os << pfa._arr[index] << endl;
	return os;
}
