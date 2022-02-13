#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int d = abs(b[i] - a[i]);
        ans = ans + min(d, 10 - d);
    }
    cout << ans << endl;
    return 0;
}