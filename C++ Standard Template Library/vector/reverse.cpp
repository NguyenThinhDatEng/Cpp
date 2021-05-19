#include <vector>
#include<stack>

using namespace std;

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