#include<vector>
std::vector<int> initializeVector(int n)
{
	std::vector<int> a;
	if (n < 1) return a;
	int i = 1;
	do
	{
		a.push_back(i++);
	} while (i <= n);
	return a;
}