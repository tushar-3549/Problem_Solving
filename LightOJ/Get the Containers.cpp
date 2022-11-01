// https://lightoj.com/problem/get-the-containers

#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       all(x)      (x).begin(),(x).end()
#define       ff          first
#define       ss          second 
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;

int n, m;

bool isSatisfy(int v[], int n, int m, int mid)
{
	int part = 1;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += v[i];
		if(sum > mid)
		{
			part++;
			sum = v[i];
		}
	}
	if(part <= m)
		return true;
	else 
		return false;
}

int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	//while(t--)
	{
		//int n, m;
		cin >> n >> m;
		int v[n+1];
		//std::vector<int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		int sum = 0, mx = 0;
		for(int i = 0; i < n; i++)
		{
			sum += v[i];
			mx = max(v[i], mx);
		}
		int L = mx, R = sum;
		int ans = 0;
		while(L <= R)
		{
			int mid = (L + R)/2;
			if( isSatisfy(v, n, m, mid) )
			{
				ans = mid;
				R = mid - 1;
			}
			else 
				L = mid + 1;
		}
		cout << "Case " << i << ": " << ans << endl;
	}

	return 0;
}
