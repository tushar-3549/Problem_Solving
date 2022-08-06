#include <bits/stdc++.h>
using namespace std;
#define      ll             long long
#define      watch(x)       cout << (#x) << " is " << (x) << "\n"
#define      watch2(x,y)    cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int p = 0, c = 0, f = 0;
		while(n--)
		{
			int x, y;
			cin >> x >> y;
			if(x < p || y < c || y - c > x - p)
			{
				f = 1;
				//break;
			}
			p = x, c = y;
		}
		if(f)
			cout << "NO" << endl;
		else 
			cout << "YES" << endl;
	}

	return 0;
}

// https://codeforces.com/problemset/problem/1334/A
