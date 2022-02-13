
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int main()
{
    FST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string x,y;
        int sz = s.size();
        if(sz % 2 == 0)
        {
            for(int i=0;i<sz/2;i++)
            {
                x+=s[i];
            }
            for(int i=sz/2;i<sz;i++)
            {
                y+=s[i];
            }
            if(x==y)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else 
           cout << "NO" << endl;
    }
    return 0;
}