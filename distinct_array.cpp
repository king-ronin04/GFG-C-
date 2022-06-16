#include <bits/stdc++.h>
using namespace std;

int distinct_array(int arr[], int n)
{
    int count = 0;
    bool isDistinct = true;

    for (int i = 0; i < n; i++)
    {   
        isDistinct = true;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = false;
                break;
            }
        }
        if(isDistinct == true)
            count++;
    }
    return count;
}

int main()
{
    int arr[] = {10, 20, 10, 20, 30};
    int n = 5;

    cout << distinct_array(arr, n);

    return 0;
}