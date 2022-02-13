#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll u,v;
        cin>>u>>v;
        ll x = -u*u;
        ll y = v*v;
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}
