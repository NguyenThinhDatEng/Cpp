#include "set.h"
string secondOrder(std::vector<int> arr)
{
	set<int> s;
	for (int var : arr)
		s.insert(var);
	if (s.size() < 2)
		return "NO";
	return to_string(*(++s.begin()));
}