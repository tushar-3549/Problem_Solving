#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    //vector<int>v(n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        //v.push_back(i);
    }
    //int r;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            s.insert(arr[j]-arr[i]);
        }
    }
    cout<<s.size()<<endl;
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
