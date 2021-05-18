// set - associative containers - unique elements - keys
// In a set, the elements are always ascending or descending
// Set is implemented like a binary search tree (tim kiem nhi phan)

#include "set.h"

int differentNumbers(vector<int> inputVector)
{
	set<int> s;
	for (int var : inputVector)
		s.insert(var);
	return s.size();
}