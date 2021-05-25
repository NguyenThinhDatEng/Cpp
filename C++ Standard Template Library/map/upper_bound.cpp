#include "map.h"
vector<string> greaterString(vector<string> arr1, vector<string> arr2)
{
    map<string, bool> mp;
    // the elements of arr2 are the keys
    for (auto x : arr1)
        mp[x] = 1;
    vector<string> res;
    map<string, bool>::iterator it;
    for (auto x : arr2)
    {
        it = mp.upper_bound(x);
        if (it != mp.end())
            res.push_back((*it).first);
        else
            res.push_back("-1");
    }
    return res;
}
