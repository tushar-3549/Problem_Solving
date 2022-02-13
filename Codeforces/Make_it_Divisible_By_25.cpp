#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 1e9;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                int now = (s[i] - '0') * 10 + s[j] - '0';
                if (now % 25 == 0)
                {
                    ans = min(ans, (int)s.size() - i - 2);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}