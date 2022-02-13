#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int j=0;
    for(int i=0;i<s2.length();i++)
    {
        if(s1[j]==s2[i])
        {
            j++;
        }
    }
    cout<<j+1<<endl;
    return 0;
}
