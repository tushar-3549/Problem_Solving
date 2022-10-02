// https://codeforces.com/problemset/problem/1738/A
#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       all(x)      (x).begin(),(x).end()
#define       ff          first
#define       ss          second 
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n+1];
		ll b[n+1];
		for(ll i = 0; i < n; i++)
			cin >> a[i];
		for(ll i = 0; i < n; i++)
			cin >> b[i];
		vector <ll> fire, frost;
		for(ll i = 0; i < n; i++)
		{
			if(a[i])
				frost.pb(b[i]);
			else 
				fire.pb(b[i]);
		}

		if(fire.empty())
		{
			ll ans = accumulate(frost.begin(), frost.end(), (ll) 0);
			cout << ans << endl;
		}
		else if(frost.empty())
		{
			ll ans = accumulate(fire.begin(), fire.end(), (ll) 0);
			cout << ans << endl;
		}
		else 
		{
			ll ans = 0;
			sort(fire.begin(), fire.end());
			sort(frost.begin(), frost.end());
			if(fire.size() == frost.size())
			{
				ans -= min(fire[0], frost[0]);
			}
			while(!fire.empty() and !frost.empty())
			{
				ans += ((ll) 2 *fire.back() + (ll) 2 * frost.back());
				fire.pop_back();
				frost.pop_back();
			}
			while(!fire.empty())
			{
				ans += fire.back();
				fire.pop_back();
			}
			while(!frost.empty())
			{
				ans += frost.back();
				frost.pop_back();
			}
			cout << ans << endl;
		}
	}

	return 0;
}
