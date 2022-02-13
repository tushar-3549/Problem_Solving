#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        int flag = 0;
        while ((x > 20) && (n > 0))
        {
            x = x / 2 + 10;
            n--;
        }
        while ((x > 0) && (m > 0))
        {
            x = x - 10;
            m--;
            if (x <= 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}