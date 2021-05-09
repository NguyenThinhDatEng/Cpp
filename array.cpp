// D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT//3.03.txt
#include "array.h"

void initializeArr(int* (&a), int n)
{
	a = new int [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

void initializeArr(int** (&a), int n)
{
	a = new int* [n + 1];
	for (int i = 0; i < n + 1; i++)
		*(a + i) = new int[n + 1];
}

void inputArr(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void inputArr(int** a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
}

void readFile(int* (&a), int& n)
{
	ifstream inputFile("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT//3.04.txt");
	if (inputFile.fail())
	{
		cout << "Failed to open this file!" << endl;
		exit(0);
	}
	inputFile >> n;
	cout << n << endl;
	initializeArr(a, n);
	while (!inputFile.eof())
	{
		for (int i = 0; i < n; i++)
			inputFile >> a[i];
	}
	displayArr(a, n);
	inputFile.close();
}

void readFile(int **(&a), int &n)
{
	ifstream inputFile("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT//3.03.txt");

	if (inputFile.fail())
	{
		cout << "Failed to open this file!" << endl;
		exit(0);
	}
	inputFile >> n;
	cout << n << endl;
	initializeArr(a, n);
	while (!inputFile.eof())
	{
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				inputFile >> a[i][j];
	}
	displayArr(a, n);
	inputFile.close();
}

void showDistanceTraveled(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << " (" << a[i] << ") " << (i == (n - 1) ? "\n" : "->");
}

void displayArr(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << right << a[i];
	}
	cout << endl;
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

void freeArr(int* a)
{
	delete[] a;
}

void free2Darray(int** a, int n)
{
	for (int i = 0; i < n; i++)
		delete[] * (a + i);
	delete[] a;
}
