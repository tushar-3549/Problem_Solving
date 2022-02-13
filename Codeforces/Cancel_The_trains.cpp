#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=m; i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+m);
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(a[i]==b[j])
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
