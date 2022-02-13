#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        int mx=INT_MIN;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
            mx = max(mx,x);
        }


        double ans = (double)mx+(double)(sum-mx)/(n-1);
        printf("%.6lf\n",ans);
    }
    return 0;
}
