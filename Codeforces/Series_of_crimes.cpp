#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<int>x,y;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='*')
            {
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    for(int i=0; i<x.size(); i++)
    {
        for(int j=0; j<y.size(); j++)
        {
            if(arr[x[i]][y[j]] != '*')
            {
                cout<<x[i]+1<<" "<<y[j]+1<<endl;
            }
        }
    }
    return 0;
}
