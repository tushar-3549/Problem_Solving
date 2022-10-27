
// https://codeforces.com/problemset/problem/1744/D
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
		int n;
		cin >> n;
		int res = 0;
		//std::vector <int> arr(n);
		vector <int> v;
		for(int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;
			while(x % 2 == 0)
			{
				res++;
				x /= 2;
			}
			int cur = i;
			int ind = 0;
			while(cur % 2 == 0)
			{
				ind++;
				cur /= 2;
			}
			v.pb(ind); 
		}
		sort(v.rbegin(), v.rend());
		if(res >= n)
		{
			cout << 0 << endl;
			continue;
		}
		int ans = 0;
		for(int i = 0; i < v.size(); i++)
		{
			res += v[i];
			ans++;
			if(res >= n)
			{
				cout << ans << endl;
				break;
			}
		}
		if(res < n)
			cout << -1 << endl;

	}



	return 0;

}
