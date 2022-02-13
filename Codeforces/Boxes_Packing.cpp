#include<bits/stdc++.h>
using namespace std;
#define tushar() ios_base::sync_with_stdio(0);cin.tie(0);
const int mx = 5e3+123;
int arr[mx];
int main()
{
    tushar();
    int n;
    cin >> n;
    int arr[n];
    map<int,int>frq;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        frq[arr[i]]++;
    }
    int ans=0;
    for(int i=0; i<n; i++)
        ans = max(ans,frq[arr[i]]);
    cout<<ans<<endl;
    return 0;
    }
