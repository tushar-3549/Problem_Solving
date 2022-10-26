
// https://codeforces.com/problemset/problem/1744/B
#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       all(x)      (x).begin(),(x).end()
#define       ff          first
#define       ss          second 
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;

int lcm(int a, int b)
{
	int g = __gcd(a, b);

	return (a*b)/g;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		ll n, q;
		cin >> n >> q;
		ll arr[n+1];
		ll sum = 0, even = 0, odd = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
			if(arr[i] % 2)
				odd++;
			else 
				even++;
		}
		while(q--)
		{
			ll x, y;
			cin >> x >> y;
			if(x == 0)
			{
				sum += (even * y);
				if(y & 1)
					even = 0;
			}
			else 
			{
				sum += ((n - even) * y);
				if(y & 1)
					even = n;
			}

			cout << sum << endl;
		}
	}



	return 0;

}
