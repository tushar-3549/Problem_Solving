#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        while (!is_sorted(a.begin(), a.end()))
        {
            for (int i = ans % 2; i < n-1; i += 2)
            {
                if (a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
            }
            ans += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
