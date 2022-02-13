#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mn=0,mx=0,d,t,mnt[31],mxt[31],x,ans[31];
    cin>>d>>t;
    for(int i=1; i<=d; i++)
    {
        cin>>mnt[i]>>mxt[i];
        mn+=mnt[i];
        mx+=mxt[i];
        ans[i]=mnt[i];
    }
    if(t>mx || t<mn)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        t-=mn;
        for(int i=1; i<=d && t; i++)
        {
            ans[i]+=x=min(t,mxt[i]-mnt[i]);
            t-=x;
        }
        for(int i=1; i<=d; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
