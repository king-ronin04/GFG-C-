#include <iostream>
using namespace std;

int ifprime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void prime_fact(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (ifprime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x *= i;
            }
        }
    }
}

int main()
{
    int n ;
    cin>>n;
    prime_fact(n);
    return 0;
}