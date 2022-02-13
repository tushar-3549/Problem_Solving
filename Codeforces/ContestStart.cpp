#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, t;
        cin >> n >> x >> t;
        ll a = t / x;
        ll ans = 0;
        if (x > t)
        {
            cout << 0 << endl;
        }
        else if (x == t)
        {
            cout << n - 1 << endl;
        }
        else if (a >= n)
        {
            cout << (n * (n - 1)) / 2 << endl;
        }
        else
        {
            ll z = n - a;
            ans += z * a;
            ans += (a * (a - 1)) / 2;
            cout << ans << endl;
        }
        // ll a = n-1;
        // ll b = t/x;
        // ll mn = min(a,b);
        // if(mn==0)
        // {
        //     cout<<0<<endl;

        // }
        // ll y = mn*(mn-1)/2;
        // ll c = 0;
        // ll p = max(c,y);
        // ll ans = p + mn*(n-mn);
        // cout<<ans<<endl;
    }

    return 0;
}
