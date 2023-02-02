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
		int arr[n+1][n+1];
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		int ind = -1, num;
		std::map<int, int> mp1;
		std::map<int, int> mp2;
		for(int i = 1; i <= n; i++)
		{
			mp1[arr[i][n-1]] = i;
			mp2[arr[i][n-1]]++;
		}
		for(auto x: mp2)
		{
			if(x.second == 1)
				ind = x.first;
			else
				num = x.first;
		}
		for(int i = 1; i < n; i++)
		{
			cout << arr[mp1[ind]][i] << " ";
		}
		cout << num << endl;
	}

	return 0;
}
