// https://codeforces.com/problemset/problem/1350/B
// https://vjudge.net/contest/477784#problem/G

#include <bits/stdc++.h>

#define     ll           long long int  
#define     print(x)     cout << (#x) << " : " << (x) << "\n"
#define     endl           '\n'

using namespace std;
const       int    N = 1e5+9;
int fx[N], arr[N];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		//int arr[n+1];
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		for(int i = 1; i <= n; i++)
			fx[i] = 1;
		for(int i = 1; i <= n; i++)
		{
			for(int j = i*2; j <= n; j+=i)
			{
				if(arr[i] < arr[j])
				{
					fx[j] = max(fx[j], fx[i] + 1);
				}
			}
		}
		int res = 0;
		for(int i = 1; i <= n; i++)
		{
			res = max(fx[i], res);
		}
		cout << res << endl;
	}
	
	return 0;
}
