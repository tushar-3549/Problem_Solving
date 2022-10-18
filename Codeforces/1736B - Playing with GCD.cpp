
// https://codeforces.com/problemset/problem/1736/B
#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       all(x)      (x).begin(),(x).end()
#define       ff          first
#define       ss          second 
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;

int lcm(int a, int b)
{
	int g = __gcd(a, b);

	return (a*b)/g;
}

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
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		int brr[n+1];
		brr[1] = arr[1];
		brr[n+1] = arr[n];
		for(int i = 2; i <= n; i++)
			brr[i] = lcm(arr[i-1], arr[i]);
		int flag = 0;

		// for(auto x: brr)
		// 	cout << x << " ";
		// cout << endl;

		for(int i = 2; i <= n+1; i++)
		{
			if(__gcd(brr[i-1], brr[i]) != arr[i-1])
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}



	return 0;

}
