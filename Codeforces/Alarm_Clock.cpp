#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a, b, c, d, r, s, n, total;
    cin >> a >> b >> c >> d;
    total = b;
    r = a - b;
    s = c - d;
    if (a > b)
    {
        if (c <= d)
        {
            total = -1;
        }

        else
        {
            if (r % s == 0)
            {
                n = r / s;
            }
            else
            {
                n = r / s + 1;
            }
            total = total + (n * c);
        }
      //  total = total + n * c;
    }
    cout << total << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}