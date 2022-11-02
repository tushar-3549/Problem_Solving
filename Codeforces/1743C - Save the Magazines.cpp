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
		string s;
		cin >> s;
		int arr[n+1];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int p = 0, ans = 0;
		for(int i = 0; i < n; i++)
		{
			if(s[i] == '0')
				p = arr[i];
			else 
			{
				if(p > arr[i])
				{
					ans += p;
					p = arr[i];
				}
				else 
				{
					ans += arr[i];
				}
			}
		}
		cout << ans << endl;
	}
}
