#include <iostream>
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
        int arr[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];
        sort(arr,arr+n);
        int i,j;
        int mn = INT_MAX;
        for(int k=0;k<n-1;k++)
        {
            if((arr[k+1]-arr[k]) < mn)
            {
                mn = arr[k+1]-arr[k];
                i=k;
                j=k+1;
            }

        }
        if(n==2)
        {
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
        else
        {
            for(int x=j;x<=n;x++)
               cout<<arr[x]<<" ";
            for(int x=0;x<=i;x++)
               cout<<arr[x]<<" ";
            cout<<endl;

        }
    }

    return 0;
}
