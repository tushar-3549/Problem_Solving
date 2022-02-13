#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    long long int sum1=0,sum2=0,ans=0;
    while(l<=r)
    {

        if(sum1<sum2)
        {
            sum1+=arr[l];
            l++;
        }
        else
        {
            sum2+=arr[r];
            r--;
        }
        if(sum1==sum2)
            ans=sum1;

    }
    cout<<ans<<endl;
    return 0;
}
