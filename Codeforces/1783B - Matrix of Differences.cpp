#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int l = 1, r = n*n;
		int arr[n+1][n+1];
		for(int i = 1; i <= n; i++)
		{
			if(i % 2)
			{
				for(int j = n; j >= 1; j--)
				{
					if(j % 2)
						arr[i][j] = r--;
					else
						arr[i][j] = l++;
				}
			}
			else
			{
				for(int j = 1; j <= n; j++)
				{
					if(j % 2)
						arr[i][j] = l++;
					else
						arr[i][j] = r--;
				}
			}
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
}
