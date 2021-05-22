#include "queue.h"
vector<int> firstNegative(vector<int> a, int k)
{
    queue<int> q;   // store the index of negative elements in the window
    int n = a.size();

    for (int i = 0; i < k - 1; i++) 
    {
        if (a[i] < 0) 
            q.push(i);
    }

    vector<int> res;
    for (int i = k - 1; i < n; i++) 
    {
        if (a[i] < 0) 
            q.push(i);
        while (!q.empty() && q.front() < i - k + 1)  // tuc la van la so am dau tien trong i+1-k truong hop tiep theo
        {                                              //vd nhu [12,-1,-7] [-1,-7,8] thi deu la -1
            q.pop();
        }

        if (q.empty())
            res.push_back(0);
        else
            res.push_back(a[q.front()]);
    }
    return res;
}