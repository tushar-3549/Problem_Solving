//Array Rearrangement Code-forces solution
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int arr1[a];
        int arr2[a];
        for(int i=0; i<a; i++)
            cin>>arr1[i];
        for(int i=0; i<a; i++)
            cin>>arr2[i];
        reverse(arr2,arr2+a);
        bool flag=true;
        for(int i=0; i<a; i++)
        {
            if(arr1[i]>b || arr2[i]>b)
            {
                flag=false;
                break;
            }
            else if((arr1[i]+arr2[i])>b)
            {
                flag=false;
                break;
            }
        }
        if(flag==true) // if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
