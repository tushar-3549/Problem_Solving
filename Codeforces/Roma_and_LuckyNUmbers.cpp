#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int cnt=0,ans=0,i;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cnt=0;
        while(arr[i] != 0)
        {

            if(arr[i]%10==4 || arr[i]%10==7)
            {
                cnt++;
            }
            arr[i]=arr[i]/10;
        }
        if(cnt<=k)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
