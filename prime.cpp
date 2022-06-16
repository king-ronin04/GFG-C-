#include <iostream>
using namespace std;

string isPrime(int num)
{

    if (num <= 1)
        return "NO";

    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            return "NO";
        }
        i++;
    }
    return "YES";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        cout << isPrime(num);
        cout << "\n";
    }

    return 0;
}