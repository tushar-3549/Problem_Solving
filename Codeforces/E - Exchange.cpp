#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, a, b;
		cin >> n >> a >> b;
		if(a > b)
			cout << 1 << endl;
		else
			cout << (n+a-1)/a << endl;
	}
	return 0;
}
