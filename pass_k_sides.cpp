#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

int n;		// the number of vertices
int k;		// the number of single paths
int m;		// the number of sides
vector<int> visited;	// to save the points are visited
int** a;			// adjacency matrix
vector< vector<int> > listPath;		// to save the paths are passed
ifstream inputFile("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT//3.12.txt");

void initializeArr(int** (&a), int n);

void readFile(int** (&a), int& n);

bool compareTwoPaths(vector<int> a, vector<int> b);

bool existedPath(vector<int> visited);

bool isCandidate(int i, int h);

void solution();

void TRY(int h)
{
	for (int i = 1; i <= n; i++)
	{
		if (isCandidate(i, h))
		{
			visited.push_back(i);
			if (h == k)
				solution();
			else
				TRY(h + 1);
			visited.pop_back();
		}
	}
}

void displayListPath();

void displayArr(int** a, int n);

void free2Darray(int** a, int n);

int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;
	while (!inputFile.eof())
	{
		readFile(a, n);

		for (int i = 1; i <= n; i++)
		{
			visited.push_back(i);
			TRY(1);
			visited.clear();
		}

		//# display result
		cout << "result: " << listPath.size() << endl;
		// displayListPath();
		listPath.clear();
	}

	inputFile.close();
	free2Darray(a, n);
	return 0;
}

void readFile(int** (&a), int& n)
{
	if (inputFile.fail())
	{
		cout << "Failed to open this file!" << endl;
		exit(0);
	}

	inputFile >> n >> k >> m;
	cout << n << " " << k << "\n" << m << endl;
	initializeArr(a, n);

	int head, tail;
	while (m > 0)
	{
		inputFile >> head >> tail;
		cout << head << " " << tail << endl;
		a[head][tail] = a[tail][head] = 1;
		m--;
	}
	// displayArr(a, n);
}

void initializeArr(int** (&a), int n)
{
	a = new int* [n + 1];
	for (int i = 0; i < n + 1; i++)
		*(a + i) = new int[n + 1];
	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j <= n; j++)
			a[i][j] = 0;
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
	for (int i = 0; i <= k; i++)
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

void displayListPath()
{
	cout << endl;
	for (int i = 0; i < listPath.size(); i++)
	{
		for (int j = 0; j <= k; j++)
			cout << listPath.at(i).at(j) << " ";
		cout << endl;
	}
}

void displayArr(int** a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << setw(5) << right << a[i][j];
		cout << endl;
	}
}

void free2Darray(int** a, int n)
{
	for (int i = 0; i <= n; i++)
		delete[] * (a + i);
	delete[] a;
}