#include "stack.h"
#include <iostream>

int reversals(string exp)
{
    int n = exp.size();

    if (n % 2) return -1;

    stack<char> st;
    st.push(exp[0]);

    for (int i = 1; i < n; i++)
    {
        char c = exp[i];
        if (c == '{')
            st.push(c);
        else
            if (!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(c);
    }

    int ret = 0;

    while (!st.empty()) {
        const auto t1 = st.top();
        st.pop();
        const auto t2 = st.top();
        st.pop();

        if (t1 != t2) {
            ret++;
        }
        ret++;
    }
    return ret;
}

//
int main()
{
    cout << "\nNguyen Van Thinh 20194178\n" << endl;
    cout << reversals("}{");
    cout << "\n" << endl;
    return 0;
}