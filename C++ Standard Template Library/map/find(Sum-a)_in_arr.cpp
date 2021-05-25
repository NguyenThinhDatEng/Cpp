#include "map.h"
bool checkSum(vector<int> arr, int sum) {
    map<int, int> mp;
    for (auto x : arr)
        mp[x]++;
    map<int, int>::iterator it;
    for (auto x : arr)
    {
        it = mp.find(sum - x);
        if (it != mp.end())
            if ((*it).first != x)
                return true;
            else
                if ((*it).second != 1)
                    return true;
                else
                    return false;
    }
    return false;
}