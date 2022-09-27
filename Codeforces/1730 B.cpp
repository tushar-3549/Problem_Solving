#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		int x[n+1];
		int t[n+1];
		for(int i = 0; i < n; i++)
			cin >> x[i];
		for(int i = 0; i < n; i++)
			cin >> t[i];
		std::vector<int> v;
		for(int i = 0; i < n; i++)
		{
			v.pb(x[i] - t[i]);
			v.pb(x[i] + t[i]);
		}
		int mn = v[0], mx = v[0];
		for(int i = 0; i < v.size(); i++)
		{
			mn = min(v[i], mn);
			mx = max(v[i], mx);
		}
		int ans = (mn + mx);
		cout << ans / 2;
		if(ans % 2 != 0)
			cout << ".5";
		cout << endl;
	}

	return 0;
}
