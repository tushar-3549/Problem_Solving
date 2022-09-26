#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, c;
		cin >> n >> c;
		int arr[n+1];
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		int freq[101] = {0};
		for(int i = 1; i <= n; i++)
			freq[arr[i]]++;
		int ans = 0;
		for(int i = 1; i <= 100; i++)
		{
			ans += min(c, freq[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
