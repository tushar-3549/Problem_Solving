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
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int brr[n+1];
		for(int i = 0; i < n; i++)
			cin >> brr[i];

		int f = 0, zero_dif = -1, dif = -1;

		for(int i = 0; i < n; i++)
		{
			if(arr[i] < brr[i])
			{
				f = 1;
				break;
			}
			if(brr[i] != 0)
		{
			if(dif == -1)
			{
				dif = (arr[i] - brr[i]);
			}
			else
			{
				if(arr[i] - brr[i] != dif)
				{
					f = 1;
					break;
				}
			}
		}

		else
		{
			zero_dif = max(zero_dif, arr[i] - brr[i]);
		}
		}


		if(f == 1)
		{
			cout << "NO" << endl;
		}
		else
		{
			if(dif == -1 or zero_dif <= dif)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

	return 0;
}
