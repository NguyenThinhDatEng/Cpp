#include "vector.h"

void displayList(vector<vector<int>> list)
{
	for (vector<int> lst : list)
	{
		for (int var : lst)
			cout << var << " ";
		cout << endl;
	}
}

void displayList(vector<int> list)
{
	for (int var : list)
		cout << var << " ";
}
