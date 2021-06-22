#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int check_leapYear(int year)
{
    if (year < 1 || year > pow(10, 5))
        return 2;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 1;
    return 0;
}

int dayOf(int month, int year)
{
    if (month < 1 || month > 12 || year < 1 || year > pow(10, 5))
        return 0;
    else
        switch (month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                {
                    return 31;
                    break;
                }
                case 4:
                case 6:
                case 9:
                case 11:
                {
                    return 30;
                    break;
                }
                default:
                {
                    if (check_leapYear(year) == 1)
                        return 29;
                    return 28;
                    break;
                }
            }
    
}

int main()
{
    int month, year;
    cin >> month >> year;
    int res = dayOf(month, year);
    if (res)
        cout << dayOf(month, year);
    else
        cout << "INVALID";
    return 0;
}