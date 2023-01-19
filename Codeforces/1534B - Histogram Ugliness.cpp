// https://codeforces.com/problemset/problem/1534/B
#include <bits/stdc++.h>

#define     ll     long long int 
#define     endl   '\n'
#define     pb     push_back
#define     int    long long int 

using namespace std;

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		// int arr[n+1];
		std::vector<int> arr;
		arr.pb(0);
		for(int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;
			arr.pb(x);
		}
		arr.pb(0);
		int r1 = 0;
		for(int i = 1; i <= n; i++)
		{
			if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
			{
				int temp = max(arr[i-1], arr[i+1]);
				r1 += (arr[i] - temp);
				arr[i] = temp;
			}
		}
		int r2 = 0;
		for(int i = 1; i <= n+1; i++)
		{
			r2 += abs(arr[i-1] - arr[i]);
		}
		cout << r1+r2 << endl;
	}

	return 0;
}
