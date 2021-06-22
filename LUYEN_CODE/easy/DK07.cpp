#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void first_degree_equation(int a, int b)
{
    if (a == 0)
        if (b == 0)
            cout << "INF";
        else
            cout << "NO";
    else
    {
        double x = (double)-b/a;
        if (x == 0)
            x = 0;
        cout << x;
    }       
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    if (a == 0)
        first_degree_equation(b, c);
    else
    {
        int delta = b * b - 4 * a * c;
        if (delta >= 0)
        {
            double tmp = sqrt(delta);
            double x1 = (-b + tmp) / (2 * a);
            if (delta > 0)
            {
                double x2 = (double)-b/a - x1;
                if (x2 == 0) x2 = 0;
                cout << x2 << " ";
            }
            if (x1 == 0) x1 = 0;
            cout << x1;
        }
        else
            cout << "NO";
    }
    return 0;
}