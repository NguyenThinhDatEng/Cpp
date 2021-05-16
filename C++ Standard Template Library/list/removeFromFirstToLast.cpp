#include "list.h"
list<int> changeValue(list<int> l, int first, int last) {
    list<int>::iterator iHead = l.begin();
    list<int>::iterator iTail = l.begin();
    advance(iHead, first - 1);
    advance(iTail, last);
    l.erase(iHead, iTail);
    return l;
}

std::vector<int> verifyFunction(std::vector<int> v, int first, int last)
{
    list<int> l(v.begin(), v.end());
    l = changeValue(l, first, last);
    vector<int> vec(l.begin(), l.end());
    return vec;
}
