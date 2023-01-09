#include <bits/stdc++.h>
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
		int fr = s[0] - '0';
		for(int i = 1; i < n; i++)
		{
			if(s[i] == '0')
				cout << '+';
			else
			{
				if(fr == 1)
				{
					cout << '-';
					fr--;
				}
				else
				{
					cout << '+';
					fr++;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
