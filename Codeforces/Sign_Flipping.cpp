#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll x = abs(arr[i]);
            if(i%2==0)
                cout<<-x<<" ";
            else
                cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
