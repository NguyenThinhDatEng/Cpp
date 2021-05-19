#include "stack.h"

string reverseString(string s)
{
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s.at(i));
    }
    while (st.empty() == false) {
        res += st.top();
        st.pop();
    }
    return res;
}
