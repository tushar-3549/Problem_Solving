#include <bits/stdc++.h>
#define    ll           long long int  
#define    endl         '\n'
#define    FAST_IO      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	FAST_IO

	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;
		if(a == b)
		{
			cout << "YES" << endl;
			continue;
		}
		if(m == 1 or b.size() == 1)
		{
			if(count(a.begin(),a.end(),b[0]) == 0)
			{
				cout << "NO" << endl;
			}
			else 
			{
				cout << "YES" << endl;
			}
			continue;
		}
		if(b.size() >= a.size() and b.back() != a.back())
		{
			cout << "NO" << endl;
			continue;
		}
		bool f = true;
		if(b.size() > 1)
		{
			while(b.size() > 1)
			{
				if(a.back() != b.back())
				{
					f = false;
					break;
				}
				a.pop_back();
				b.pop_back();
			}
			if(!f)
			{
				cout << "NO" << endl;
				continue;
			}
			if(count(a.begin(),a.end(),b[0]) == 0)
		    {
			    cout << "NO" << endl;
		    }
		    else 
		    {
			    cout << "YES"  << endl;
		    }
		}
	}


	return 0;
}
