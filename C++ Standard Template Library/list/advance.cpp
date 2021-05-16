#include "list.h"
list<int> changeValue(list<int> l, int k, int x) {
	list<int>::iterator it = l.begin();
	advance(it, k - 1);		// move to the k .th element
	*it = x;
	return l;
}

vector<int> verifyFunction(vector<int> v, int k, int x) {
	list<int> l(v.begin(), v.end());
	l = changeValue(l, k, x);
	vector<int> vec(l.begin(), l.end());
	return vec;
}