#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int s[n+1];
		for(int i = 0; i < n; i++)
			cin >> s[i];
		int f[n+1];
		for(int i = 0; i < n; i++)
			cin >> f[i];
		int res[n+1];
		int head = 0;
		for(int i = 0; i < n; i++)
		{
			if(s[i] >= head)
			{
				res[i] = f[i] - s[i];
			}
			else
			{
				res[i] = f[i] - head;
			}
			head = f[i];
		}
		for(int i = 0; i < n; i++)
		{
			cout << res[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
