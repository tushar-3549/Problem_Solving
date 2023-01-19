// https://codeforces.com/problemset/problem/1641/A
#include <bits/stdc++.h>

#define       ll       long long int  
#define       endl     '\n'

using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, x;
		cin >> n >> x;
		ll arr[n+1];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] != -1)
			{
				int f = -1;
				ll target = arr[i]*x;
				int low = i+1, high = n-1;
				while(low <= high)
				{
					int mid = low + (high - low) / 2;
					if(arr[mid] == target)
					{
						f = mid;
						high = mid - 1;
					}
					else if(arr[mid] < target)
					{
						low = mid + 1;
					}
					else
					{
						high = mid - 1;
					}
				}
				if(f == -1)
					ans++;
				else
					arr[f] = -1;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
