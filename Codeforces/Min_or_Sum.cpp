// Live contest
//  code_forces div 2 772

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define tushar  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    tushar;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int a = v.front();
        for (auto &b : v)
        {
            a |= b;
        }
        cout << a << endl;
        /* int n;
        cin >> n;
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        int x, mx = INT_MIN, p = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            int k = 0;
            while (x > 0)
            {
                arr[k] = max(x % 2, arr[k]);
                x /= 2;
                k++;
            }
            mx = max(k, mx);
        }
        int res = 0;
        res += arr[0];
        for (int i = 1; i <= mx; i++)
        {
            p *= 2;
            res += (p * arr[i]);
        }
        cout << res << endl; */
    }
    return 0;
}
