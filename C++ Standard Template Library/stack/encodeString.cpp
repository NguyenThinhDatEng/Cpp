#include "stack.h"
#include <iostream>
string encodeString(string s)
{
    s = s + '@';
    string res = "";
    stack<char> st;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (st.empty() || s[i] == st.top())
            st.push(s[i]);
        else
        {
            res += st.top() + to_string(st.size());
            while (!st.empty())
            {
                st.pop();
            }
            st.push(s[i]);
        }
    }
    return res;
}

//

int main()
{
    cout << "\nNguyen Van Thinh 20194178\n" << endl;
    cout << encodeString("aaabbaaac");
    cout << "\n" << endl;
    return 0;
}