#include<vector>
std::vector<int> removeLastElement(std::vector<int> v)
{
    v.pop_back();
    return v;
}