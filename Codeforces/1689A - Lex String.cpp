#include <bits/stdc++.h>
#define     all(x)                x.begin(),x.end()
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		string a, b;
		cin >> a >> b;
		string c = "";
		// reverse(sort(a.begin(),a.end()));
		// reverse(sort(b.begin(),b.end()));
		sort(all(a));
        reverse(all(a));
        sort(all(b));
        reverse(all(b));

		int last;
		if(a.back() <= b.back())
		{
			last = 0;
			c.push_back(a.back());
			a.pop_back();
		}
		else 
		{
			last = 1;
			c.push_back(b.back());
			b.pop_back();
		}
		int cns = 1;
		while(!a.empty() and !b.empty())
		{
			if(a.back() <= b.back())
			{
				if(last == 0)
				{
					if(cns == k)
					{
						c.push_back(b.back());
						b.pop_back();
						last = 1;
						cns = 1;
					}
					else 
					{
						last = 0;
						cns ++;
						c.push_back(a.back());
						a.pop_back();
					}
				}
				else 
				{
					last=0;
                    cns=1;
                    c.push_back(a.back());
                    a.pop_back();
				}
			}

			else if(a.back() > b.back())
			{
				if(last == 1)
				{
					if(cns == k)
					{
						c.push_back(a.back());
						a.pop_back();
						last = 0;
						cns = 1;
					}
					else 
					{
						last = 1;
						cns ++;
						c.push_back(b.back());
						b.pop_back();
					}
				}
				else 
				{
					last=1;
                    cns=1;
                    c.push_back(b.back());
                    b.pop_back();
				}
			}
		}

		cout << c << endl;

	}


	return 0;
}
