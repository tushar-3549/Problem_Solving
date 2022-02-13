#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n + 1], b[n + 1], t[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i] - b[i - 1] + t[i];
        if (i == n)
            break;
        ll ans = sum + (b[i] - a[i] + 1) / 2;
        sum = max(b[i], ans);
    }
    cout << sum << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}