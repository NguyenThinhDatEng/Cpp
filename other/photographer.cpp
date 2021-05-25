#include "array.h"
#include "vector.h"

int n;		// the number of shooting locations
int photographers;	// the number of photographers
int** c;			// cost array
vector<int> lst;	// list of selected places
bool visited[1000];	// mark the point is visited
int x[1000];		// save the road from first point to last point
int costTotal = 0;
int minCost;

void readFile();

inline bool isCandidate(int k, int& location, int& cost);

inline void solution();

void TRY(int k)
{
	for (int index = 1; index < lst.size() - 1; index++)
	{
		int nextLocation = lst.at(index);
		int cost = c[x[k - 1]][nextLocation];
		if (isCandidate(k, nextLocation, cost))
		{
			x[k] = nextLocation;
			costTotal += cost;
			visited[nextLocation] = true;
			if (k == lst.size() - 1)
				solution();
			else
				TRY(k + 1);
			//# backtracking
			visited[nextLocation] = false;
			costTotal -= cost;
		}
	}
}

int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;
	
	memset(visited, false, sizeof(visited));

	readFile();

	cout << "\n" << endl;
	return 0;
}

void readFile()
{
	ifstream inputFile("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT//3.11.txt");

	if (inputFile.fail())
	{
		cout << "Failed to open this file!" << endl;
		exit(0);
	}

	inputFile >> n >> photographers;
	cout << n << " " << photographers << endl;
	initializeArr(c, n);

	int i = 1;		// index of c array
	while (i <= n)
	{
		for (; i <= n; i++)
			for (int j = 1; j <= n; j++)
				inputFile >> c[i][j];
	}
	displayArr(c, n);

	string s;
	getline(inputFile, s);

	while (!inputFile.eof())
	{
		string number = "";
		getline(inputFile, s);
		s = s + ' ';
		for (char c : s)
			if (c >= '0' && c <= '9')
				number += c;
			else
			{
				int tmp = stoi(number, 0, 10);
				lst.push_back(tmp);
				number = "";
			}

		//# prepare to backtracking
		minCost = INT_MAX;
		displayList(lst);
		x[0] = lst.front();
		//# solution
		TRY(1);
		//# result
		if (minCost == INT_MAX) minCost = 0;
		cout << "\n" << minCost << endl;
		lst.clear();
	}
	inputFile.close();
}

inline bool isCandidate(int k, int& nextLocation, int& cost)
{
	if (k == lst.size() - 1)
	{
		nextLocation = lst.back();
		cost = c[x[k - 1]][nextLocation];
	}
	else
		if (visited[nextLocation]) return false;
	if (cost == 0) return false;
	return true;
}

inline void solution()
{
	if (minCost > costTotal)
		minCost = costTotal;
}