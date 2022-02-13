#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ll sum=0,need=0;
    for(int i=0; i<n; i++)
    {
        need+=i;
        sum+=arr[i];
        if(need>sum)
        {
            cout <<"NO\n";
            return;
        }
    }
    cout <<"YES\n";
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
