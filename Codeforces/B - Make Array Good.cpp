#include <bits/stdc++.h>
#define    endl      '\n'
#define    pb        push_back
#define    ll        long long int 

using namespace std;

const      int N    = 1e5+123;
const      ll inf   =  LLONG_MAX;

ll f(ll x)
{
    ll cur=1;
    while(cur<=x)
    {
        cur*=2;
    }
    return cur;
}

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll arr[n+1];
		// for(ll i = 1; i <= n; i++)
		// 	cin >> arr[i];

		cout << n << endl;

		for(ll i = 1; i <= n; i++)
		{
			ll x;
			cin >> x;
			cout << i << " " << f(x)-x << endl;
			//cout << i << " " << (1ll << arr[i]) - arr[i] << endl;
		}
	}
	return 0;
}
