#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n ,ans = 0;
        cin >> a >> b >> n;
        while (max(a, b) <= n)
        {
            //int ans = 0;
            if (a < b)
                a += b;
            else
                b += a;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}