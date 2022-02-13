#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v.front()==v.back())
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}