#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<ll>dp(n,INF);
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=i+2;j++)
        {
            if(j<n)
            {
                dp[j]=min(dp[j],dp[i]+abs(arr[i]-arr[j]));
            }
        }
    }
    cout<<dp[n-1]<<endl;
    return 0;
}
