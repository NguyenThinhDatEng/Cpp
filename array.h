#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <limits.h>

using namespace std;

void initializeArr(int* (&a), int n);

void initializeArr(int** (&a), int n);

void inputArr(int* a, int n);

void inputArr(int** a, int n);

void readFile(int* (&a), int& n);

void readFile(int** (&a), int &n);

void showDistanceTraveled(int* a, int n);

void displayArr(int* a, int n);

void displayArr(int** a, int n);

void freeArr(int* a);

void free2Darray(int** a, int n);