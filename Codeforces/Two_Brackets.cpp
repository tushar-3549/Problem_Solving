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
        int r = 0, ans = 0, sq = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                r++;
            }
            else if (s[i] == ')')
            {
                if (r > 0)
                {
                    r--;
                    ans++;
                }
            }
            else
            {
                if (s[i] == '[')
                {
                    sq++;
                }
                else if (s[i] == ']')
                {
                    if (sq > 0)
                    {
                        sq--;
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}