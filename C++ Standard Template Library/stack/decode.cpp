#include "stack.h"
// s = "3[a3[b]1[ab]]", decodeString(s) = "abbbababbbababbbab"
void repeat(stack <char>& ms, string str, int num)
{
    string res = "";
    for (int i = 0; i < num; i++)
        for (auto x : str)
            ms.push(x);
}

std::string decodeString(std::string s)
{
    stack <char> ms;

    for (auto x : s)
    {
        if (x == ']')
        {
            string ans = "";
            int num = 0, base = 1;

            while (ms.top() != '[')
            {
                ans = ms.top() + ans;
                ms.pop();
            }
            ms.pop();

            while (!ms.empty() && '0' <= ms.top() && ms.top() <= '9')
            {
                num += (ms.top() - '0') * base;
                base *= 10;
                ms.pop();
            }
            repeat(ms, ans, num);
        }
        else
            ms.push(x);
    }

    string res = "";
    while (!ms.empty())
    {
        char x = ms.top();
        res.push_back(x);
        ms.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

//
#include <iostream>

int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;
	cout << decodeString("3[a3[b]1[ab]]e");
	cout << "\n" << endl;
	return 0;
}