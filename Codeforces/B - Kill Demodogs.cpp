// https://codeforces.com/problemset/problem/1731/B
#include <bits/stdc++.h>

#define    ll       long long int  
const      ll       mod = 1e9+7;

using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a = (n*(n+1))%mod;
		ll b = ((4*n-1)*337)%mod;
		ll FinalAns = (a*b)%mod;
		cout << FinalAns << endl;
		
		// ll ans = (((2*n*(n+1)*(2*n+1))/6)%mod - ((n*(n+1)/2)%mod))%mod;
		// ll FinaLAns = (2022 * ans)%mod;
		// if(FinaLAns < 0)
		// 	FinaLAns += mod;
		// cout << FinaLAns << endl;
	}
	return 0;
}
