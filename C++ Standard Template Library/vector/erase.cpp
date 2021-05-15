// erase(first, last) The first and last are two iterators.
// from first to last - 1
#include <vector>
	std::vector<int> removeElements(std::vector<int> v, int l, int r)
	{
		v.erase(v.begin() + l, v.begin() + r + 1);
		return v;
	}