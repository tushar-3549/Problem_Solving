
// https://codeforces.com/problemset/problem/1736/A
#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       all(x)      (x).begin(),(x).end()
#define       ff          first
#define       ss          second 
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;
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
		int arr[n+1];
		int brr[n+1];
		int zero1 = 0, zero2 = 0, one1 = 0, one2 = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if(arr[i])
				one1++;
			else 
				zero1++;
		}
		for(int i = 0; i < n; i++)
		{
			cin >> brr[i];
			if(brr[i])
				one2++;
			else 
				zero2++;
		}
		int ans1 = 0, ans2;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] != brr[i])
				ans1++;
		}
		ans2 = abs(zero1 - zero2) + abs(one1 - one2);
		ans2 /= 2;
		ans2++;
		//cout << ans1 << " " << ans2 << endl;

		cout << min(ans1, ans2) << endl;

	}



	return 0;

}
