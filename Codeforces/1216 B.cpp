// https://codeforces.com/problemset/problem/1216/B
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
	int n;
	cin >> n;
	vector < pair <int, int> > arr(n);
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i].ff;
		arr[i].ss = i + 1;
	}
	sort(all(arr), greater<pair<int, int>>());
	// all(arr);
	// reverse(all(arr));
	// for(auto x: arr)
	// 	cout << x.ss << " ";
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += (i * (arr[i].ff) + 1);
	}
	cout << sum << endl;
	for(auto y : arr)
		cout << y.ss << " ";
	cout << endl;

	return 0;
}
