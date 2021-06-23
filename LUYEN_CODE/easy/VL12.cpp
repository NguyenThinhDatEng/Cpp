#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "INF";
    else
    {
        if (n < 0) n *= -1;
        for (int i = n; i > 0; i--)
            if (n % i == 0)
                cout << i << " ";
    }
    return 0;
}