// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

class Solution
{
public:
    int digitalRoot(int n)
    {
        //Your code here
        int sum = 0;
        while (n != 0)
        {
            int temp = n % 10;
            sum = sum + temp;
            n = n / 10;
        }
        if (sum < 10)
            return sum;
        else
            return digitalRoot(sum);
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        Solution obj;
        cout << obj.digitalRoot(n) << endl;
    }
    return 0;
}