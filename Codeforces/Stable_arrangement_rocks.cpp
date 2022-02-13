#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = (n + 1) / 2;
        if (x < k)
        {
            cout << -1 << endl;
        }
        else
        {
            string s[n + 2][n + 2];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    s[i][j] = '.';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (k == 0)
                    break;
                if (i % 2 == 0)
                {
                    s[i][i] = 'R';
                    k--;
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << s[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}