#include "array.h"

int n;		// the number of cities
int** c;	// cost list
int* x;		// the road traveled
int cost = 0;
int minCost = INT_MAX;

bool isCandidate(int j, int k)	// true if the city haven't visited
{
	int i = 0;
	do
	{
		if (j == x[i])
			return false;
		i++;
	} while (i < k);
	return true;
}

void TRY(int k)
{
	for (int j = 2; j <= n; j++)	// Next destination is city j
	{
		if (isCandidate(j, k))
		{
			cost += c[x[k - 1]][j];
			x[k] = j;
			if (k == n - 1)
			{
				cost += c[j][1];	// cost travel from city j to return city 1
				if (cost < minCost) minCost = cost;
				cout << "Cost = " << cost << endl;
				showDistanceTraveled(x, n + 1);
				cost -= c[j][1];	// prepare to backtrack
			}
			else
				TRY(k + 1);
			cost -= c[x[k - 1]][j];	// backtracking
		}
	}
}

int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;
	readFile(c, n);

	x = new int[n + 1];
	x[0] = x[n] = 1;	// start from city 1
	TRY(1);

	cout << "the smallest cost = " << minCost;

	free2Darray(c, n);
	cout << "\n" << endl;
	return 0;
}