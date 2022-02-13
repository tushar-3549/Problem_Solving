#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int BinaryToDecimal(int n)
{
    int num=n;
    int base=1;
    int ans=0;
    while(num>0)
    {
        int last=num%10;
        num=num/10;
        ans+=last*base;
        base*=2;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    //while(t--)
    for(int i=1; i<=t; i++)
    {
        char s;
        int a1,b1,c1,d1;
        cin >>a1>>s>>b1>>s>>c1>>s>>d1;
        int a2,b2,c2,d2;
        cin >>a2>>s>>b2>>s>>c2>>s>>d2;
        a2=BinaryToDecimal(a2);
        b2=BinaryToDecimal(b2);
        c2=BinaryToDecimal(c2);
        d2=BinaryToDecimal(d2);
        if(a1==a2 && b1==b2 && c1==c2 && d1==d2)
        {
            cout <<"Case "<<i<<": "<<"Yes"<<endl;
        }
        else
        {
            cout <<"Case "<<i<<": "<<"No"<<endl;
        }
    }
    return 0;
}
