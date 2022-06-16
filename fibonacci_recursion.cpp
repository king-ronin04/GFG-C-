#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fibonacci(int n)
    {
        if (n <= 2)
            return 1;

        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.fibonacci(n);
    }
    return 0;
}