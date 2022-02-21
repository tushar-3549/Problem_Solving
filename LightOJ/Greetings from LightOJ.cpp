#include<iostream>
using namespace std;
int main()
{
    int t,i,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;
        sum=a+b;
        cout<<"Case"<<" "<<i<<":"<<" "<<sum<<endl;
    }
    
    return 0;
}
