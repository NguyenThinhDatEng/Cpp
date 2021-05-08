#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <limits.h>

using namespace std;

void initialize2Darray(int** (&a), int n);

void input2Darray(int** (&a), int n);

void readFile(int** (&a), int &n);

void showDistanceTraveled(int* a, int n);

void display2Darray(int** a, int n);

void free2Darray(int** a, int n);