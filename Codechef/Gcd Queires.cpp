#include<bits/stdc++.h>
using  namespace  std;

int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int ar[n+3];
        for(int i=1;i<=n;i++)
           cin>>ar[i];
        int pre[n+2];
        int pos[n+3];

        pre[0]=0;
        for(int i=1;i<=n;i++)
           pre[i]=gcd(pre[i-1],ar[i]);

        pos[n+1]=0;
        for(int i=n;i>=1;i--)
        {
            pos[i]=gcd(pos[i+1],ar[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int ans=gcd(pre[l-1],pos[r+1]);
            cout<<ans<<endl;
        }
    }
    return 0;
}
