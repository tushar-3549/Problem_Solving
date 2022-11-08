// https://codeforces.com/problemset/problem/1742/D
#include <bits/stdc++.h>
using namespace std;

int main()
{

	std::vector<int> coprime[1111];
		for(int i = 1; i <= 1000; i++)
		{
			for(int j = 1; j <= 1000; j++)
			{
				if(__gcd(i, j) == 1)
					coprime[i].push_back(j);
			}
		}

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		//int arr[n+1];
		vector<int>arr(n+1);
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		
		vector<int> ind(1111, -1);
		for(int i = 1; i <= n; i ++)
		{
			ind[arr[i]] = i;
		}
		int res = 0;
		for(int i = 1; i <= 1000; i++)
		{
			if(ind[i] == -1)
				continue;
			if(i == 1)
			{
				res = max(res, 2*ind[i]);
				continue;
			}
			for(auto p: coprime[i])
			{
				if(ind[p] != -1)
				{
					res = max(res, ind[i] + ind[p]);
				}
			}
		}
		if(res == 0)
			res = -1;
		cout << res << endl;
	}
}
