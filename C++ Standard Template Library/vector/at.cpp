#include<vector>
int sumOfVector(std::vector<int> v)
{
	int res = 0;
	for (int i = 0; i < v.size(); i++)
	{
		res += v.at(i);
	}

	return res;
}