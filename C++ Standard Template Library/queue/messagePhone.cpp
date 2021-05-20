#include "queue.h"

std::vector<int> messagesPhone(std::vector<int> arr, int k)
{
	queue<int> q;
	// use a vector to mark the occurence of numbers in the queue
	bool b[1001];
	q.push(arr[0]);
	// assigned to array b
	for (int i = 0; i < 1001; i++)
	{
		b[i] = false;
	}
	b[arr[0]] = true;

	for (int i = 1; i < arr.size(); i++)
	{
		if (b[arr[i]] == false)
			if (q.size() < k)
			{
				q.push(arr[i]);
				b[arr[i]] = true;
			}
			else
			{
				b[q.front()] = false;
				q.pop();
				q.push(arr[i]);
				b[arr[i]] = true;
			}
	}
	// show queue on screen
	vector<int> res;
	while (!q.empty())
	{
		res.push_back(q.front());
		q.pop();
	}
	return res;
}