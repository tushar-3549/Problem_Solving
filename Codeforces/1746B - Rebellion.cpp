
// https://codeforces.com/problemset/problem/1746/B
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
		std::vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		if(is_sorted(arr.begin(), arr.end()))
		{
			cout << 0 << endl;
			continue;
		}
		int l = -1, r = -1;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] == 1)
			{
				l = i;
				break;
			}
		}
		for(int i = n - 1; i >= 0; i--)
		{
			if(arr[i] == 0)
			{
				r = i;
				break;
			}
		}
		int ans = 0;
		while(l < r)
		{
			if(arr[l] == 1 && arr[r] == 0)
			{
				arr[l]--;
				arr[r]++;
				ans++;
			}
			else if(arr[l] == 0)
				l++;
			else if(arr[r] == 1)
				r--;
		}
		cout << ans << endl;
	}



	return 0;

}
