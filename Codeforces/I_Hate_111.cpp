#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int f=0;
        for(int i=0;i*111<=x;i++)
        {
            if((x-111*i)%11==0)
            {
                f=1;
                break;
            }
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
