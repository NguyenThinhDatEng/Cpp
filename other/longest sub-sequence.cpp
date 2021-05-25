#include "array.h"

int n;		// the number of elements
int* a;		// input Array
int* length_sequence;		// mark the length of the sequence
int* trace;					// truy vet
int indexOftrace = 0;
int maxLength = 0;			// is signed when occur new max length

void lengthSub_sequence()
{
	for (int i = 1; i < n; i++)
	{
		int tmp = 0;
		int j = 0;
		do
		{
			if (a[i] > a[j])
			{
				tmp = length_sequence[j] + 1;
				if (length_sequence[i] < tmp)
					length_sequence[i] = tmp;		// initialize length_sequence[] array
				if (maxLength < tmp)
				{
					maxLength = tmp;
					trace[indexOftrace++] = j;		// initialize trace[] array
				}
			}
			j++;
		} while (j < i);
		if (tmp == 0) length_sequence[i] = 1;		// special case
	}
	int index = n - 1;

	// get the last element of trace[]
	do
	{
		if (maxLength == length_sequence[index])
		{
			trace[indexOftrace++] = index;
			break;
		}
	} while (1);
}

int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;

	readFile(a, n);

	initializeArr(length_sequence, n);
	initializeArr(trace, n);
	length_sequence[0] = 1;		// first element'length = 1

	lengthSub_sequence();		// create trace[] and length_sequence[]

	cout << "length_sequence: " << endl;
	displayArr(length_sequence, n);
	cout << "trace: " << endl;
	displayArr(trace, indexOftrace);

	cout << indexOftrace << endl;		// the length of the longest sub_sequence
	for (int i = 0; i < indexOftrace; i++)		// display the longest sub_sequence
		cout << a[trace[i]] << " ";

	cout << "\n" << endl;
	return 0;
}
// avoid
// 7
// 4 5 2 3 4 7 8
// (looking for a way to fix it ...)