#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int i,j,x=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>x;
            
            if(x==1)
            {
                cout<<abs(i-3)+abs(j-3)<<endl;

            }
        }
    }
    return 0;
}