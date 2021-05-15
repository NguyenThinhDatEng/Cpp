#include<vector>
int sumOfOddElements(std::vector<int> v)
{
    int result = 0;
    std::vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if (*it % 2 != 0)
            result += *it;
    }
    return result;
}
//it != v.end() : check if the variable it has pointed over the last element in the vector or not
//v.end() is the element that comes after the last element in the vector.