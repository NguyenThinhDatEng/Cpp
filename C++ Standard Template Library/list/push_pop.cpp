#include"list.h"
list<int> deleteFrontBack(list<int> l) {
	l.pop_back();
	l.pop_front();
	return l;
}

vector<int> verifyFunction(vector<int> v) {
	list<int> l(v.begin(), v.end());
	l = deleteFrontBack(l);
	vector<int> ans(l.begin(), l.end());
	return ans;
}