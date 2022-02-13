#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans;
        ans = (a+b+c)-1;
        cout<<ans<<endl;
    }

    return 0;
}
