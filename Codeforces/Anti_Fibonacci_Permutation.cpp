// Educational Codeforces Round 123 (Rated for Div. 2)
// Live contest
// Anti Fibonacci Permutation :problem B
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
        int n;
        cin >> n;
        vector<int>v;
        if(n == 3)
        {
            cout << 3 << " " << 2 << " " << 1 << endl;
            cout << 1 << " " << 3 << " " << 2 << endl;
            cout << 3 << " " << 1 << " " << 2 << endl;
        }
        else
        {
            for(int i=n; i>0; i--)
            {
                v.push_back(i);
            }
            for(int i=0; i<n; i++)
            {
                int vr = v[0];
                for(int j=1; j<n; j++)
                {
                    v[j-1]=v[j];
                    cout << v[j-1] << " ";
                }
                v[n-1]=vr;
                cout << vr;
                cout << endl;
            }
        }
    }
    return 0;
}

