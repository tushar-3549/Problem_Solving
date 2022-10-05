// https://codeforces.com/problemset/problem/1738/B
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
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		vector <ll> pre(n+1);
		for(ll i = n-k+1; i <= n; i++)
			cin >> pre[i];
		if(k == 1)
		{
			cout << "YES" << endl;
			continue;
		}
		vector <ll> arr(n+1);
		for(ll i = n-k+2; i <= n; i++)
			arr[i] = (pre[i] - pre[i-1]);
		
		if(!is_sorted(arr.begin() + n-k+2, arr.end()))
		{
			cout << "NO" << endl;
			continue;
		}
		for(ll i = n-k+1; i > 1; i--)
		{
			arr[i] = arr[i+1];
			pre[i-1] = (pre[i] - arr[i]);
		}
		arr[1] = pre[1];

		if(!is_sorted(arr.begin()+1, arr.end()))
		{
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
	}
	

	return 0;
}
