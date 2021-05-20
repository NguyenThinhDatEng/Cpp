#include "queue.h"

vector<string> generateBinary(int n)
{
	vector<string> res;
	queue<string>q;
	q.push("1");
	while (n != 0) {
		q.push(q.front() + '0');
		q.push(q.front() + '1');
		res.push_back(q.front());
		q.pop();
		n--;
	}
	return res;
}
