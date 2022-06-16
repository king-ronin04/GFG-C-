#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int columnWithMaxZeros(vector<vector<int>> arr, int n)
	{
		int pos;
		int max=INT_MIN;
			
		// Your code here
		for (int i = 0; i < n; i++)
		{
			int zerocount = 0;
			for (int j = 0; j < n; j++)
			{
				if (arr[j][i] == 0)
					zerocount++;
			}
			if(zerocount>max)
			{
				max=zerocount;
				pos=i;
			}
		}
		return pos;
	}
};

int main()
{

	int testcase;

	cin >> testcase;

	while (testcase--)
	{
		int N;
		cin >> N;
		vector<vector<int>> arr(N, vector<int>(N));

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int x;
				cin >> x;
				arr[i][j] = x;
			}
		}
		Solution ob;
		cout << ob.columnWithMaxZeros(arr, N) << endl;
	}

	return 0;
}