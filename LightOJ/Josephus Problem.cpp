// https://lightoj.com/problem/josephus-problem

#include <bits/stdc++.h>

#define     ll           long long int  
#define     print(x)     cout << (#x) << " is " << (x) << "\n"
#define     endl           '\n'

using namespace std;

int josephus(int n, int k)
{
	if(n == 1)
		return 0;
	else
		return (josephus(n - 1, k) + k) % n;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n, k;
		cin >> n >> k;
		cout << "Case " << i << ": " << josephus(n, k) + 1 << endl;
	}
	
	return 0;
}
