#include "queue.h"
#include <iostream>

bool isPrime(int n)
{
	if (n == 2) return true;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return false;
	return true;
}

std::vector<int> superPrimeNumber(int n)
{
	queue<int> q;
	vector<int> res;

	for (int i = 2; i <= 7 && i <= n; i++)
	{
		if (isPrime(i))
			q.push(i);
	}

	if (n >= 23)
	{
		int generation = q.back();
		while (generation <= n)
		{
			for (int i = 1; i < 10; i += 2)
			{
				generation = q.front() * 10 + i;
				if (isPrime(generation) && generation <= n)
					q.push(generation);
			}
			res.push_back(q.front());
			q.pop();
		}
	}

	while (!q.empty())
	{
		res.push_back(q.front());
		q.pop();
	}
	return res;
}

int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;
	vector<int> v = superPrimeNumber(0);
	for (auto var : v)
		cout << var << " ";
	cout << "\n" << endl;
	return 0;
}