#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            cout << "NO";
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    cout << "Palindrome";
    return 0;
}