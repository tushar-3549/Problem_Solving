// https://codeforces.com/problemset/problem/1703/D

#include <bits/stdc++.h>
using namespace std;
#define     ll      long long int 
#define     endl    '\n'

void solve()
{
	int n;
	cin >> n;
	string s[n+1];
	string ans(n,'0');
	set <string> st;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
		st.insert(s[i]);
		//ans[i] = '0'; 
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < s[i].size(); j++)
		{
			string s1 = "", s2 = "";
			for(int k = 0; k < j; k++)
			{
				s1 += s[i][k];
			}
			for(int k = j; k < s[i].size(); k++)
			{
				s2 += s[i][k];
			}
			if(st.find(s1) != st.end() && st.find(s2) != st.end())
			{
				ans[i] = '1';
				break;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << ans[i];
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t --> 0)
		solve();
}
