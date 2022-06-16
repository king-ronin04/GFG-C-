#include <bits/stdc++.h>
using namespace std;

string decimal_to_binary(int s)
{
    string str = "";
    while (s > 0)
    {
        int n = s % 2;
        str = str + to_string(n);
        s /= 2;
    }
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    int s;
    cin >> s;

    string ans = decimal_to_binary(s);
    cout << ans;

    return 0;
}