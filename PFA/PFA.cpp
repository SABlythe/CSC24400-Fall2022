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
	
//sort
void 
PFA::sort()
{
}	
	
istream& operator>> (istream &is, PFA &arr)
{
	return is;
}
ostream& operator<<(ostream &os, const PFA &pfa)
{
	for (unsigned int index =0; index< pfa._filled; index++)
		os << pfa._arr[index] << endl;
	return os;
}
