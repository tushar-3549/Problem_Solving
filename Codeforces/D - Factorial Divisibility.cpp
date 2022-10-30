#include <bits/stdc++.h>
#define    ll     long long int 

using namespace std;
int main()
{	
	// ll t;
	// cin >> t;
	// while(t--)
	// {
		ll n, x;
		cin >> n >> x;
		ll arr[n+1] = {0};
		std::vector<ll> cnt(x+1);
		//ll cnt[x+1] = {0};
		for(ll i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		for(ll i = 0; i < n; i++)
		{
			//cin >> arr[i];
			if(arr[i] < x)
				cnt[arr[i]]++;
		}
		//sort(arr, arr+n);
		int flag = 0;
		for(int i = 0; i < x; i++)
		{
			if(cnt[i] % (i+1) != 0)
			{
				flag = 1;
				break;
			}
			else 
				cnt[i+1] += (cnt[i]/(i+1));
		}
		if(flag)
			cout << "No\n";
		else 
			cout << "Yes\n";
	//}


	return 0;
}
