#include <bits/stdc++.h>
using namespace std;

int leap_year(int year)
{
    if (year % 4 == 0 and year % 100 != 0)
    {
        cout << "Leap Year"<<"\n";
    }
    else if (year >= 400 and year % 400 == 0)
    {
        cout << "Leap Year"<<"\n";
    }
    else
    {
        cout << "Not a Leap Year"<<"\n";
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int year;
        cin >> year;
        leap_year(year);
    }
    return 0;
}