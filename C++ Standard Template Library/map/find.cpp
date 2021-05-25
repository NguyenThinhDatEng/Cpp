#include "map.h"
int sumOfCommon(std::vector<int> arr1, std::vector<int> arr2)
{
    map <int, int> cnt;
    int ans = 0;
    for (auto x : arr1)
        cnt[x] = x;
    for (auto x : arr2)
    {
        if (cnt.find(x) != cnt.end())
        {
            ans += cnt.find(x)->second;
            cnt[x] = 0;
        }
    }
    return ans;
}