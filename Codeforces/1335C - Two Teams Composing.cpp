// https://codeforces.com/problemset/problem/1335/C

#include <bits/stdc++.h>
using namespace std;

#define        ll               long long int  
#define        print(x)         cout << (#x) << " = " << (x) << "\n"
#define        print2(x,y)      cout <<(#x)<<" = "<<(x)<<" and "<<(#y)<<" = "<<(y)<<"\n"
#define        endl             '\n'

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	vector<int> arr(n);
    	for(int i = 0; i < n; i++)
    		cin >> arr[i];
    	if(n == 1)
    	{
    		cout << 0 << endl;
    		continue;
    	}

    	map<int, int> mp;
    	int same = 0, unique = 0;
    	for(int i = 0; i < n; i++)
    	{
    		if(mp[arr[i]] == 0)
    		{
    			mp[arr[i]]++;
    			unique++;
    			same = max(same, mp[arr[i]]);
    		}
    		else
    		{
    			mp[arr[i]]++;
    			same = max(same, mp[arr[i]]);
    		}
    	}
    	//print2(unique, same);
    	if(same == unique-1)
    		cout << same << endl;
    	else
    	{
    		int v1 = min(same-1, unique);
    		int v2 = min(same, unique-1);
    		cout << max(v1, v2) << endl;
    	}
    	
    }

    return 0;
}
