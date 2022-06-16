#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    cout << "Before: " << str<<"\n";

    int len = str.length()-1;
    string newstring;
    while (len >= 0)
    {
        newstring = newstring + str[len];
        len--;
    }
    cout << "After: " << newstring;
    return 0;
}