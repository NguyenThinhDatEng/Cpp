#include "list.h"

list<int> removeElements(list<int> linkedList, int n) {
	linkedList.remove(n);
	return linkedList;
}

vector<int> verifyFunction(vector<int> v, int n) {
	list<int> l(v.begin(), v.end());
	l = removeElements(l, n);
	vector<int> vec(l.begin(), l.end());
	return vec;
}