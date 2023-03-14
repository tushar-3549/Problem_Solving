#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		n = abs(n);
		m = abs(m);
		if(n == m)
			cout << 2*n << endl;
		else
			cout << max(n, m) * 2 - 1 << endl;
	}

	return 0;
}
