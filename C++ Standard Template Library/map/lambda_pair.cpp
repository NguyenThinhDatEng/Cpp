#include "map.h"

string modifyString(string s) {
	map<char, int> mp;
	for (auto x : s)
		mp[x]++;

	vector<pair<char, int> > vt(mp.begin(), mp.end());
	sort(vt.begin(), vt.end(), [](pair<char, int> a, pair<char, int> b)
		{
			if (a.second == b.second) return a.first < b.first;
			else
				return a.second > b.second;
		});
	string str = "";
	for (auto x : vt)
		str += x.first;
	return str;
}