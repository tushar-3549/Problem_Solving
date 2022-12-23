#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x=1;
		cin >> n;
		for(int i = 2; i*i <= n; i++)
		{
			if(n % i == 0)
			{
				x = n/i;
				break;
			}
		}
		cout << x << " " << n-x << endl;
	}
	return 0;
}
