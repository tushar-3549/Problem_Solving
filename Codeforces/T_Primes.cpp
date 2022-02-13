#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int arr[1000000]={0};
    for(int i=2;i<=1000000;i++)
    {
        if(arr[i]==0)
        {
            for(int j=2;i*j<=1000000;j++)
            { 
                arr[i*j]=1;
            }
        }
    }
    int n;
    cin>>n;
    ll x,sq;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sq=sqrt(x);
        if(x==1)
          cout<<"NO\n";
        else if(sq*sq==x && arr[sq]==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;

}