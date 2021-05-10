#include <iostream>
#include <vector>

using namespace std;

int n;		// the number of vertices
int k;		// the number of single paths
int m;		// the number of sides
vector<int> visited;	// to save the points are visited
int** a;			// adjacency matrix
vector< vector<int> > listPath;		// to save the paths are passed

void initializeArr(int** (&a), int n)
{
	a = new int* [n + 1];
	for (int i = 0; i < n + 1; i++)
		*(a + i) = new int[n + 1];
	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j <= n; j++)
			a[i][j] = 0;
}

void inputArr(int** a, int n)
{
	int i, j;		// row, column
	int count = 0;	// from 0 to m
	do {
		cin >> i >> j;
		a[i][j] = a[j][i] = 1;
		count++;
	} while (count < m);
}

bool isCandidate(int i, int h)
{
	if (a[visited.at(h - 1)][i] == 0) return false;
	for (int j = 0; j < h; j++)
		if (visited.at(j) == i) return false;
	return true;
}

bool compareTwoPaths(vector<int> a, vector<int> b)
{
	for (int i = 0; i < k; i++)
		if (a.at(i) != b.at(k - i)) return true;
	return false;
}

bool existedPath(vector<int> visited)
{
	for (vector<int> path : listPath)
		if (compareTwoPaths(visited, path) == false)
			return true;
	return false;
}

void solution()
{
	if (existedPath(visited)) return;
	listPath.push_back(visited);
}

void TRY(int h)
{
	for (int i = 1; i <= n; i++)
	{
		if (isCandidate(i, h))
		{
			visited.push_back(i);
			if (h == k && visited.size() == n)
				solution();
			else
				TRY(h + 1);
			visited.pop_back();
		}
	}
}

void free2Darray(int** a, int n)
{
	for (int i = 0; i <= n; i++)
		delete[] * (a + i);
	delete[] a;
}

int main()
{
	//cout << "\nNguyen Van Thinh 20194178\n" << endl;
	cin >> n >> k;
	cin >> m;

	initializeArr(a, n);
	inputArr(a, n);
	
	for (int i = 1; i <= n; i++)
	{
		visited.push_back(i);
		TRY(1);
		visited.clear();
	}

	//# display result
	cout << listPath.size();

	//# display all of paths
	/*for (int i = 0; i < listPath.size(); i++)
	{
		for (int j = 0; j <= k; j++)
			cout << listPath.at(i).at(j) << " ";
		cout << endl;
	}*/

	free2Darray(a, n);
	return 0;
} 