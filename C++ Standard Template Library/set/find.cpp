// return iterator
// is s.end() if not found
#include"set.h"
bool setFind(std::vector<int> arr, int k)
{
    std::set<int> s(arr.begin(), arr.end());
    if (s.find(k) != s.end())
        return true;
    return false;
}
