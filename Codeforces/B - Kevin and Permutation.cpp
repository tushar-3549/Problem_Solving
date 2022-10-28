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
		if(n <= 3)
		{
			for(int i = 1; i <= n; i++)
				cout << i << " ";
			cout << endl;
			//cout << 1 << " " << 2 << " " << 3 << endl;
			continue;
		}
		int l = (n/2)+1, r = 1;
		while(l <= n)
		{
			cout << l << " ";
			l++;
			cout << r << " ";
			r++;
			if(l == n && n%2)
			{
				cout << l << endl;
				break;
			}
		}
		cout << endl;
	}
}
