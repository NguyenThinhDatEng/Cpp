#include "map.h"
vector<int> mergeProducts(vector<string> A, vector<string> B) {
	map<string, bool> a;
	vector<int> res;

	for (auto x : A)
		a[x] = 1;

	map<string, bool>::iterator it;
	for (auto x : B)
	{
		it = a.find(x);
		if (a.find(x) != a.end())
			res.push_back(0);
		else
		{
			a[x] = 1;
			res.push_back(1);
		}
	}
	return res;
}