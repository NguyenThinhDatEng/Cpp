/*
    upper_bound(value) Returns the iterator to the position of the smallest element that is greater than the key
	if not found return set.end()
*/

/*
	lower_bound(value) Returns iterator to the smallest element position that is not less than (greater than or equal to) the key
	if not found return set.end()
*/
#include "set.h"

std::vector<int> setFunction(std::vector<int> arr, int k)
{
    int m, n;
    std::set<int> s(arr.begin(), arr.end());
    set <int>::iterator it;
    it = s.upper_bound(k);
    if (it != s.end())
        m = *it;
    else
        m = -1;
    it = s.lower_bound(k);
    if (it != s.end())
        n = *it;
    else
        n = -1;
    return { m,n };
}
