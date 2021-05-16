#include "list.h"
// it = list_name.erase(it)
// function erase() will return iterator pointing to the element immediately after the element was deleted
list<int> removeElements(list<int> linkedList, int n) { // >= n
    list<int>::iterator it = linkedList.begin();
    list<int>::iterator tmp;
    do
    {
        tmp = it;
        if (*it >= n)
        {
            it++;
            linkedList.erase(tmp);
        }
        else
            it++;
    } while (it != linkedList.end());
    return linkedList;
}

vector<int> verifyFunction(vector<int> v, int n) {
    list<int> l(v.begin(), v.end());
    l = removeElements(l, n);
    vector<int> vec(l.begin(), l.end());
    return vec;
}
