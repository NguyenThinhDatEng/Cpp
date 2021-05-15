#include "file.h"

void writeFile(ofstream& f, int n, int m, vector<vector<int>>& lst)
{
	if (f.fail())
	{
		cout << "Failed to open this file!" << endl;
		exit(0);
	}

	f << n << " " << m << endl;

	for (vector<int> sub_lst : lst)
	{
		for (int var : sub_lst)
			f << var << " ";
		f << endl;
	}
	f << endl;
}