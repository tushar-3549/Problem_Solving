// https://codeforces.com/problemset/problem/1675/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		// if( (count(s.begin(), s.end(), '1') == n) or (count(s.begin(), s.end(), '0') == n) or (count(s.begin(), s.end(), '?') == n) )
		if(count(s.begin(), s.end(), '?') == n)
		{
			cout << n << endl;
			continue;
		}
		if(count(s.begin(), s.end(), '1') == 0)
		{
			int ans = 0;
			for(int i = 0; i < n; i++)
			{
				ans++;
				if(s[i] == '0')
					break;
			}
			cout << ans << endl;
			continue;
		}
		int ans;
		int last_zero = -1, last_one = -1;
		for(int i = n-1; i >= 0; i--)
		{
			if(s[i]=='0')
				last_zero = i;
            else
            {
                if(s[i] == '1')
                {
                    if(last_zero == -1)
                    {
                        ans = n - i;
                        break;
                    }
                    else
                    {
                        ans = last_zero - i + 1;
                        break;
                    }
                }
            }
		}
		// cout << last_one << " " << last_zero << endl;
		
		cout << ans << endl;
	}

	return 0;
}
