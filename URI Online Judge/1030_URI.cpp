// Josephus problem
#include<bits/stdc++.h>
using namespace std;
int ans(int x,int y)
{
    int r=0;
    for(int i=2;i<=x;i++)
    {
        r=(r+y)%i;
    }
    return r;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<"Case "<<i<<": "<<ans(x,y)+1<<endl;
    }
    return 0;
}
