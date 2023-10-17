#include <bits/stdc++.h>
using namespace std;

#define   ll    long long int 

ll sum(ll x)
{
    return x * (x + 1) / 2;
}
ll sumR(ll l ,ll r)
{
    return sum(r) - sum(l - 1);
}
void solve()
{
    ll n , k , x;
    cin >> n >> k >> x;
    if(x >= sumR(1 , k) && x <= sumR(n - k + 1 , n)) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}
int main()
{
     ll tt;
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}
