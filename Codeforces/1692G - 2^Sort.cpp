#include <bits/stdc++.h>
#define  ll    long long int
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		ll arr[n+1];
		for(ll i = 0; i < n; i++)
			cin >> arr[i];
		if(k == 1)
		{
			ll ans = 0;
			for(int i =1; i < n; i++)
			{
				if(2*arr[i] > arr[i-1])
				{
					ans ++;
				}
			}
			cout << ans << endl;
			continue;
		}

		ll ans = 0;
		ll cons = 0;
		ll p = 1;
		for(ll i = 1; i < n; i++)
		{
			if((arr[i]*(1ll<<p)) > arr[i-1]*(1ll<<(p-1)))
			{
				  cons++;
				if(p == 0)
				   cons++;
			    if(cons >= k)
				   ans++;
			}
			else
			{
				cons = 0;
				p = 1;
			}
		}

		cout << ans << endl;

	}

	return 0;
}
