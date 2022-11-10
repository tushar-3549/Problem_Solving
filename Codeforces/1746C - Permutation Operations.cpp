// https://codeforces.com/problemset/problem/1746/C
#include <bits/stdc++.h>
#define   endl     '\n'
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n+1];
		int ans[n+1];
		memset(ans, -1, sizeof(ans));
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		set <int> s;
		for(int i = 1; i <= n; i++)
			s.insert(i);
		int mx = arr[1];
		for(int i = 2; i <= n; i++)
		{
			if(mx < arr[i])
			{
				mx = arr[i];
			}
			else 
			{
				int d = mx - arr[i];
				auto it = s.lower_bound(d);
				ans[*it] = i;
				s.erase(it);
			}
		}
		for(int i = 1; i <= n; i++)
		{
			if(ans[i] == -1)
			{
				ans[i] = 1;
			}
		}
		for(int i = 1; i <= n; i++)
		{
			cout << ans[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}
