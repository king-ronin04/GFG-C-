#include <iostream>
using namespace std;
int main()
{
    int a, b, ans=1;
    cin >> a >> b;
    int x = min(a, b);

    for (int i = 1; i <= x; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}