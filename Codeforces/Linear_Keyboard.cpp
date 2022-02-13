#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string word;
        char c;
        map<char,int>letters; // unorderd_map<> also AC
        for(int i=1;i<=26;i++)
        {
            cin>>c;
            letters[c]=i;
        }
        cin>>word;
        int ans=0;
        for(int i=1;i<word.size();i++)
        {
            ans+=abs(letters[word[i]]-letters[word[i-1]]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
