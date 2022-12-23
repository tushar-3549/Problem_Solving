// A. Divide and Conquer
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
		int arr[n+1];
		int sum = 0, cnt;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if(sum % 2 == 0)
		{
			cout << 0 << endl;
			continue;
		}
		int mn = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] % 2)
			{
				int x = arr[i];
			    cnt = 0;
			    while(x % 2)
			    {
				    x /= 2;
				    cnt++;
			    }
			    mn = min(mn, cnt);
			}
		}
		//int mn = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] % 2 == 0)
			{
				int x = arr[i];
			    cnt = 0;
			    while(x % 2 == 0)
			    {
				    x /= 2;
				    cnt++;
			    }
			    mn = min(mn, cnt);
			}
		}
		cout << mn << endl;

	}
	return 0;
}
