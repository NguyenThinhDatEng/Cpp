#include "map.h"
int largestElement(std::vector<int> arr)
{
	map<int, int> mp;
	int minMappedValue = arr.size();
	int res = arr[0];
	for (auto x : arr)
		mp[x]++;
	for (auto x : mp)
		if (minMappedValue >= x.second)
		{
			minMappedValue = x.second;
			res = x.first;
		}
	return res;
}