#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, ans;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << "1" << endl;
        }
        else
        {
            int ex = n - 2;
            if (ex % x == 0)
            {
                ans = ex / x;
            }
            else
            {
                ans = ex / x + 1;
            }
            cout << ans + 1 << endl;
        }
        // cout<<ans+1<<endl;
    }
    return 0;
}