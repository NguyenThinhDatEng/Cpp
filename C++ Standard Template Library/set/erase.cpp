#include "set.h"
// set.erase(iterator_name);
// set.erase(value_name);

std::vector<std::string> mergeStringArr(std::vector<std::string> arr1, std::vector<std::string> arr2)
{
    set<string> s1(arr1.begin(), arr1.end());
    set<string> s2(arr2.begin(), arr2.end());
    for (string str : s2)
        if (s1.count(str))
            s1.erase(str);
    vector<string> v(s1.begin(), s1.end());
    return v;
}
