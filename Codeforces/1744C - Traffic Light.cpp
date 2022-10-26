
// https://codeforces.com/problemset/problem/1744/C
#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       all(x)      (x).begin(),(x).end()
#define       ff          first
#define       ss          second 
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;

int lcm(int a, int b)
{
	int g = __gcd(a, b);

	return (a*b)/g;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int n; char ch;
		cin >> n >> ch;
		string s;
		cin >> s;
		s += s;
		int mx = INT_MIN;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == ch)
			{
				int cnt = 0;
				while(s[i] != 'g' && i < s.size())
				{
					cnt++;
					i++;
				}
				mx = max(mx, cnt);
			}
		}
		cout << mx << endl;
	}



	return 0;

}
