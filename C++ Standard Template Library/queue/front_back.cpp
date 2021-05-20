#include "queue.h"

std::vector<int> transformArray(std::vector<int> arr, int k)
{
    vector<int> v;
    queue<int> q;
    for (int i = 0; i < arr.size(); i++) {
        q.push(arr[i]);
    }
    while (k != 0)
    {
        q.push(q.front());
        q.pop();
        k--;
    }
    while (!q.empty()) {
        v.push_back(q.front());
        q.pop();
    }
    return v;
}
