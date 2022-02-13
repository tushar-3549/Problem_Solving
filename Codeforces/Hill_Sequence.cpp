// Code chef Long Contest : Hill Sequence
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, f = 0;
        cin >> n;
        map<ll, ll> mp;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        for (auto z : mp)
        {
            if (z.second > 2)
            {
                f = 1;
                break;
            }
            v.push_back(z.first);
        }
        sort(v.begin(), v.end());
        if (f == 1 || mp[v[v.size() - 1]] == 2) // f=1 or highest element(last index because sorted) if two then it returns -1
        {
            cout << -1 << endl;
        }
        else
        {
            for (ll i = 0; i < v.size(); i++)
            {
                if (mp[v[i]] == 2)
                {
                    cout << v[i] << " ";
                }
            }
            for (ll i = v.size()-1; i >= 0; i--)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
