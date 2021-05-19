#include "stack.h"
#include <iostream>
// a sequence of integers arr and positive integer k
// delete the first k numbers that are smaller than the number immediately following it (delete arr[i] if arr[i + 1] > arr[i])
std::vector<int> removeElements(std::vector<int> arr, int k)
{
    vector<int> v;
    stack<int> st;
    st.push(arr[0]);
    int i = 1;
    int length = arr.size();
    while (k > 0)
    {
        if (!st.empty() && st.top() < arr[i])
        {
            k--;
            st.pop();
        }
        else
        {
            st.push(arr[i]);
            i++;
        }
    }

    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());

    while (i < length)
    {
        v.push_back(arr[i++]);
    }

    return v;
}

//

int main()
{
    cout << "\nNguyen Van Thinh 20194178\n" << endl;
    vector<int> arr{ 23,45,11,77,18 };
    vector<int> v = removeElements(arr, 3);
    for (auto var : v)
        cout << var << " ";
    cout << "\n" << endl;
    return 0;
}