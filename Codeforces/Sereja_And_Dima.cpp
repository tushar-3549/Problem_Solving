#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0,d=0;
    int left=0,right=n-1;
    int taken=n;
    int turn=0;
    while(taken != 0)
    {
        if(turn%2==0)
        {
            if(arr[left]>arr[right])
            {
                s+=arr[left];
                left++;
            }
            else
            {
                s+=arr[right];
                right--;
            }
        }
        else
        {
            if(arr[left]>arr[right])
            {
                d+=arr[left];
                left++;
            }
            else
            {
                d+=arr[right];
                right--;
            }
        }
        taken--;
        turn++;
    }
    cout<<s<<" "<<d;
    return 0;
}
