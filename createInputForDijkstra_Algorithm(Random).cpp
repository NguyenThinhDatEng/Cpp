//
#include <ctime>
#include "vector.h"
#include "file.h"
#include <algorithm>

using namespace std;

bool compareVector(vector<int>& a, vector<int>& b)
{
	vector<int> A{ a[0], a[1] };
	vector<int> B{ b[0], b[1] };
	if (A == B)
		return true;
	return false;
}

bool isExistedLine(vector<int>& line, vector< vector<int> >& lst)
{
	for (vector<int> s_line : lst)
		if (compareVector(s_line, line))
			return true;
	return false;
}

int new_random_number(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void main()
{
	ofstream f("D://NguyenThinhDatSci//Cpp//00.txt", ios::out); // "D://NguyenThinhDatSci//Cpp//00.txt"
	int number_of_repetitions = 10;
	int n, m;
	int vectex1, vectex2;
	int length;
	vector< vector<int> > lst;
	vector<int> straight_line;
	srand(time(NULL));
	do
	{
		n = new_random_number(10, 20);
		m = new_random_number(15, 30);
		int j = 0;
		while (j < m)
		{
			vectex1 = new_random_number(1, n);
			do {
				vectex2 = new_random_number(1, n);
			} while (vectex2 == vectex1);

			straight_line.push_back(vectex1);
			straight_line.push_back(vectex2);

			if (!isExistedLine(straight_line, lst))
			{
				length = new_random_number(1, 50);

				straight_line.push_back(length);
				lst.push_back(straight_line);
				j++;
			}
			straight_line.clear();
		}
		//sort(lst.begin(), lst.end());
		writeFile(f, n, m, lst);
		lst.clear();
		number_of_repetitions--;
	} while (number_of_repetitions > 0);
	f.close();
}