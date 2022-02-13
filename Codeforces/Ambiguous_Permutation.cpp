#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n)
    {
        //cin >> n;
        int arr[n+1];
        int rev[n+1];
        bool b=true;
        for(int i=1; i<=n; i++)
            cin >> arr[i];
        for(int i=1; i<=n; i++)
        {
            rev[arr[i]] = i;
        }
        for(int i=1; i<=n; i++)
        {
            if(arr[i] != rev[i])
            {
                b=false;
            }
        }
        if(b == true)
        {
            cout <<"ambiguous"<<endl;
        }
        else
        {
            cout <<"not ambiguous"<< endl;
        }
        cin >> n;
    }
    return 0;
}
