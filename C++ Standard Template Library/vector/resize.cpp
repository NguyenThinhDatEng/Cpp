#include<vector>
std::vector<int> resizeVector(std::vector<int> v, int n)
{
    v.resize(n);
    return v;
}
//  If n is greater than the current size of the vector, the vector will automatically add elements with a 0 value

/*for (int i = 1; i <= 10; i++) {
    v.push_back(i);
}
v.resize(5);
v.resize(10, 10);
v.resize(15);
1 2 3 4 5 10 10 10 10 10 0 0 0 0 0*/