#include"list.h"
// Sort the elements in the list in non-decreasing order.
list<int> sortLinkedList(list<int> l) {
	l.sort();
	return l;
}

vector<int> verifyFunction(vector<int> v) {
	list<int> l(v.begin(), v.end());
	l = sortLinkedList(l);
	vector<int> vec(l.begin(), l.end());
	return vec;
}