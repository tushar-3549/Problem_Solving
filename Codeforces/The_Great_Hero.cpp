#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,x,mx=INT_MIN,sum=0;
        cin>>a>>b>>n;
        vector<long long int>vec1,vec2;
        for(long long int i=0; i<n; i++)
        {
            cin>>x;
            vec1.push_back(x);
            mx=max(mx,x);
        }
        for(long long int i=0; i<n; i++)
        {
            cin>>x;
            vec2.push_back(x);
        }
        for(long long int i=0; i<n; i++)
        {
            x=ceil(vec2[i]+a-1)/a;
            sum+=x*vec1[i];
        }
        sum-=mx;
        b-=sum;

        if(b<=0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
