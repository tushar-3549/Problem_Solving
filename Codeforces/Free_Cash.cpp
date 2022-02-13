#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[24][60];
int main()
{
    int t;
    cin>>t;
    int cashiar=0;
    //int arr[24][60];
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]++;
        if(arr[a][b]>cashiar)
        {
            cashiar=arr[a][b];
        }
       

    }
    cout<<cashiar<<endl;
    return 0;
}