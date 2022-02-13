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
        int brr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
            cin>>brr[i];
        sort(arr,arr+n);
        sort(brr,brr+n);
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>brr[i] || brr[i]-arr[i]>1)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
