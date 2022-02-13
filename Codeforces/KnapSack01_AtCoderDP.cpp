// DP contest : At coder Knapsack problem 1
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll w[n+1],c[n+1];
    ll dp[n+1][k+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>w[i]>>c[i];
    }
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=k;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
                continue;
            }
            if(w[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j-w[i]] + c[i],dp[i-1][j]);
        }
    }
    cout<<dp[n][k]<<endl;
    return 0;
}
