
// https://codeforces.com/problemset/problem/1742/B
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
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		int f = 0;
		for(int i = 0; i < n-1; i++)
		{
			if(arr[i] == arr[i+1])
			{
				f = 1;
				break;
			}
		}
		if(f)
			cout << "NO\n";
		else 
			cout << "YES\n";
	}



	return 0;

}
