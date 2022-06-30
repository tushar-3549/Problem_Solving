#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		string res = "";
		int x, y;
		if(s[0] != '9')
		{
			for(int i =  0; i < n; i++)
			{
				x = s[i] - '0';
				y = 9 - x;
				res += (y + '0');
			}
		}
		else 
		{
			int c = 0;
			for(int i = n - 1; i >= 0; i--)
			{
				x = s[i] -'0';
				x += c;
				if(x > 1)
				{
					y = 11 - x;
					c = 1;
					res += (y + '0');
				}
				else 
				{
					y = 1 - x;
					c = 0;
					res += (y + '0');
				}
			}
			reverse(res.begin(),res.end());
		}
		cout << res << endl;
	}
	return 0;
}
