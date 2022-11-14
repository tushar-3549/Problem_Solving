// https://codeforces.com/problemset/problem/1741/C
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
		int n;
		cin >> n;
		int arr[n+1];
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		ll ans = n;
		ll seq_sum = 0;
		for(int i = 1; i <= n; i++)
		{
			seq_sum += arr[i];
			ll sum = 0, len = 0, mxLen = i;
			int f = 0;
			for(int j = i+1; j <= n; j++)
			{
				if(arr[j] + sum > seq_sum)
					break;
				if(j == n && sum + arr[j] == seq_sum)
				{
					len++;
					mxLen = max(mxLen, len);
					f = 1;
					break;
				}
				sum += arr[j];
				len++;
				if(sum == seq_sum)
				{
					mxLen = max(len, mxLen);
					sum = 0;
					len = 0;
				}
			}
			if(f)
			   ans = min(ans, mxLen);
		}
		cout << ans << endl;

	}

	return 0;
}
