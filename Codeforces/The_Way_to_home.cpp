#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    int ans=0;
    bool f=false;
    for(int i=0; i<n-1; i++)
    {
        int x=d;
        while(x!=0)
        {
            if(s[i+x]=='1')
            {
                i+=(x-1);
                ans++;
                f=true;
                break;
            }
            x--;
        }
        if(f==false)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
