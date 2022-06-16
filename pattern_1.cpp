#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i + j >= n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}