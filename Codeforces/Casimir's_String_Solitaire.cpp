#include <iostream>
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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                a++;
            if (s[i] == 'B')
                b++;
            if (s[i] == 'C')
                c++;
        }
        if (a <= b)
        {
            int dis = b - a;
            if (dis == c)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}