#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    int maxi = 0, mini = 0;
    int min_val = 110, max_val = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > max_val)
        {
            maxi = i;
            max_val = a;
        }
        if (a <= min_val)
        {
            mini = i;
            min_val = a;
        }
    }
    if (maxi > mini)
    {
        cout << (maxi - 1) + (n - mini)-1;
    }
    else
    {
        cout << (maxi - 1) + (n - mini);
    }
    return 0;
}