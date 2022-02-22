// Educational Codeforces Round 123 (Rated for Div. 2)
// Live contest
// Doors and keys :problem A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define tushar  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    tushar;
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int r=0,b=0,g=0,mx=0;
        for(int i=0; i<s.size();i++)
        {
            if(s[i] == 'r')
            {
                r++;
            }
            if(s[i] == 'b')
            {
                b++;
            }
            if(s[i] == 'g')
            {
                g++;
            }
            if(s[i] == 'R')
            {
                if(r > 0)
                {
                    mx++;
                }
                else
                {
                    break;
                }
            }
            if(s[i] == 'B')
            {
                if(b > 0)
                {
                    mx++;
                }
                else
                {
                    break;
                }
            }
            if(s[i] == 'G')
            {
                if(g > 0)
                {
                    mx++;
                }
                else
                {
                    break;
                }
            }
        }
        if(mx == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
