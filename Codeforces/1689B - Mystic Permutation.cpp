#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1001], brr[1001];
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			brr[i] = i;
		}
		if(n == 1)
		{
			cout << -1 << endl;
			continue;
		}
		for(int i = 1; i < n; i++)
		{
			if(arr[i] == brr[i])
				swap(brr[i], brr[i+1]);
		}
		if(arr[n] == brr[n])
			swap(brr[n], brr[n-1]);

		for(int i = 1; i <= n; i++)
		{
			cout << brr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
