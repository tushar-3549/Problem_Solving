#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void solve()
{
	ll x;
	cin >> x;
	vector <ll> v;
	ll n = 10000;
	for(ll i = 1; i <= n; i++)
		v.push_back(i*i*i);

	ll l = 0, r = v.size() - 1, flag = 0;
	while(l <= r)
	{
		if(v[l] + v[r] == x)
		{
			flag = 1;
			break;
		}
		else if(v[l] + v[r] > x)
			r--;
		else
			l++;
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}
