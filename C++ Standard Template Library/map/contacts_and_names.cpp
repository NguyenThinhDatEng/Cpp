#include "map.h"
vector<int> countPrefix(vector<string> contacts, vector<string> names)
{
	map<string, int> mp;
	string tmp;
	for (auto x : names)
	{
		int lengthName = x.size();
		int count = 0;
		for (auto y : contacts)
		{
			if (lengthName <= y.size())
			{
				tmp = y.substr(0, lengthName);
				if (x == tmp)
					count++;
			}
		}
		mp[x] = count;
	}
	vector<int> result;
	for (auto name : names) {
		result.push_back(mp[name]);
	}
	return result;
}