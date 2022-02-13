#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for (long long i = 1; i <= n / 2; i++)
    {
        sum += (i * i * 8);
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    //return 0;
}