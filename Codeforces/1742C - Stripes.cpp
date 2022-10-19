
// https://codeforces.com/problemset/problem/1742/C
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
		char s[8][8];
		std::vector<int> v;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cin >> s[i][j];
				if (s[i][j] == 'R')
				{
					v.pb(i);
				}
			}
		}
		int f = 0;
		for(int i : v)
		{
			int temp = 1;
			for(int j = 0; j < 8; j++)
			{
				if(s[i][j] != 'R')
				{
					temp = 0;
					break;
				}
			}
			f |= temp;
		}
		if(f)
			cout << "R" << endl;
		else 
			cout << "B" << endl;
	}



	return 0;

}
