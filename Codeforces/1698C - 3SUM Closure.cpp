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
		int arr[n+2];
		map <int,int> mp;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			mp[arr[i]]++;
		}
		sort(arr, arr+n);
		int f = 0;
		for(int i = 0; i < n - 2; i++)
		{
			int x = arr[i] + arr[i+1] + arr[i+2];
			if(!mp[x])
			{
				f = 1;
				//break;
			}
		}
		int x = arr[0] + arr[n-1] + arr[n-2];
		int y = arr[0] + arr[1] + arr[n-1];
		if(!mp[x] or !mp[y])
		{
			f = 1;
		}
		if(f)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}
