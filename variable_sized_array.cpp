#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int *arr[m];
    int **ptr;

    ptr = arr;
    int array[n];
    for (int i = 0; i < m; i++)
    {
        arr[i] = array;
    }

    for (int i = 0; i < m; i++)
     {   for (int j = 0; j < n; j++)
        {
            arr[i][j] =10;
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";    
    }
    return 0;
}