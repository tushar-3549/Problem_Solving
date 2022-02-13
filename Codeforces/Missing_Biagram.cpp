#include <iostream>
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
        string s[n + 1];
        for (int i = 0; i < n-2; i++)
        {
            cin >> s[i];
        }
        string ans = s[0];
        int cnt = 0;
        for (int i = 1; i < n - 2; i++)
        {
            int sz = ans.size() - 1;
            if (ans[sz] == s[i][0])
            {
                ans += s[i][1];
            }
            else
            {
                cnt = 1;
                ans += s[i];
            }
        }
        if (cnt == 0)
            ans += 'a';
        cout << ans << endl;
    }
    return 0;
}