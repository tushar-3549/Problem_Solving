#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		//vector <vector <int> > grid(n, vector <int> (n));
		// vector <string> a(n);
		// for(auto &x: a)
		// 	cin >> x;
		string s[n];
		for(int i = 0; i < n; i++)
			cin >> s[i];
		int a[n+1][n+1];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				a[i][j] = (s[i][j] - '0');
			}
		}
		int ans = 0;
		for(int i = 0; i < n/2; i++)
		{
			for(int j = 0; j < (n+1)/2; j++)
			{
				int z = a[i][j] + a[j][n-1-i] + a[n-1-i][n-1-j] + a[n-1-j][i];
				ans += min(z, 4-z);
			}
		}
		cout << ans << endl;
	}
}
