#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        ll count = 0;
        ll val = min({r, g, b});
        if (r % 2 == 1)
            count++;
        if (g % 2 == 1)
            count++;
        if (b % 2 == 1)
            count++;
        if (w % 2 == 1)
            count++;
        if (count <= 1)
            cout << "YES" << endl;
        else if (val != 0)
        {
            r--;
            g--;
            b--;
            w--;
            count = 0;
            if (r % 2 == 1)
                count++;
            if (g % 2 == 1)
                count++;
            if (b % 2 == 1)
                count++;
            if (w % 2 == 1)
                count++;
            if (count <= 1)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
        else
            cout << "NO" <<"\n";
    }
    return 0;
}
