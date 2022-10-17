#ifndef _PFA_HPP_
#define _PFA_HPP_

#include <iostream>

class PFA
{
private:
	int *_arr;             // the actual array itself
	unsigned int _size;    // the "full" size of the actual array
	unsigned int _filled;  // how many elements are actually filled right now
public:
	PFA();   // "default" constructor
	
	//addItem
	bool add(int valueToAdd);
	
	//sort
	void sort();	
	
	friend std::istream& operator>> (std::istream &is, PFA &arr);
	friend std::ostream& operator<< (std::ostream &os, const PFA &arr);
};

#endif