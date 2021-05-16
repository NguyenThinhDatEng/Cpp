// list ~ doubly-linked list
/*
	@!@ declare
	list<data_type>	list_name;
					list_name(size);	[0, 0, 0, ...]
					list_name(size, value);		[value, value, ...]
*/
/* 
	@!@ iterator
	1, for (list<int>::iterator it = a.begin(); it !=a.end(); it++)
	
	2, for (list<int>::const_iterator it = a.cbegin(); it !=a.cend(); it++)
	=> can't change iterator when are iterating

	3, for (list<int>::reverse_iterator it = a.rbegin(); it != a.rend(); it++)
*/
#include<list>
#include<vector>

using namespace std;

list<int> initList(int n)
{
	list<int> a;
	int i = 1;
	do {
		a.push_back(i++);
	} while (i <= n);
	return a;
}

vector<int> verifyFunction(int n)
{
	list<int> lst = initList(n);
	vector<int> res(lst.begin(), lst.end());
	return res;
}
