#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            cout<<arr[k]<<" ";
            continue;
        }
        else
        {
            cout<<arr[n-1-k]<<" ";
            k++;
        }
    }
    cout<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
