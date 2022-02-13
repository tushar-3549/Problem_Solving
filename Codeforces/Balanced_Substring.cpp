#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, j, f = 0, p, q;
        string s;
        cin >> n >> s;
        for (i = 0; i < s.size() - 1; i++)
        {
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
            {
                f = 1;
                p = i + 1;
                q = i + 2;
                break;
            }
        }
        if (f == 1)
        {
            cout << p << " " << q << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}