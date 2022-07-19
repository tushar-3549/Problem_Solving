#include <bits/stdc++.h>
using namespace std;
#define     debug(x)        cout << #x << " = " << x << endl
#define     ll              long long int  
#define     ff              first
#define     ss              second 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		string pr = a + b;
		int n;
		cin >> n;
		string arr[n+1];
		string ch = "";
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			ch += arr[i];
		}
		int l1 = pr.size();
		int l2 = ch.size();
		map <char, int> p1;
		map <char, int> c1;
		bool f = true;
		for(int i = 0; i < l1; i++)
			p1[pr[i]]++;

		/*for (auto& it : p1) 
		{
            cout << it.first << ' '<< it.second << '\n';
        }*/

		for(int i = 0; i < l2; i++)
			c1[ch[i]]++;

		/*for (auto& it : c1) 
		{
            cout << it.first << ' '<< it.second << '\n';
        }*/

		if(l1 >= l2)
		{
			for(auto x:c1)
			{
				if(c1[x.ff] > p1[x.ff])
				{
					f = false;
					break;
				}
			}
		}
		if(f)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
