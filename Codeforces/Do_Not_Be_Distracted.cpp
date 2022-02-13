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
        string s;
        cin>>s;
        map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            char z = s[i];
            while(s[i]==z)
            {
                i++;
            }
            i--;
            if(mp[z]>1) ans=1;
        }
        if(ans==0)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
