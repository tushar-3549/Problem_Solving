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
		std::vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin >> arr[i];

		int sum1 = 0, mx1 = 0;
		for(int i = 0; i < n; i++)
		{
			sum1 += arr[i];
			mx1 = max(mx1, sum1);
		}
		//cout << mx1 << endl;

		int sum2 = 0, mx2 = 0;
		int m;
		cin >> m;
		std::vector<int> brr(m);
		for(int i = 0; i < m; i++)
			cin >> brr[i];

		for(int i = 0; i < m; i++)
		{
			sum2 += brr[i];
			mx2 = max(mx2, sum2);
		}
		//cout << mx2 << endl;

		cout << mx1 + mx2 << endl;
	}


	return 0;
}
