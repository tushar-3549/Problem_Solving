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
        int arr[n];
        int a = 0, b = 0, i;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != i % 2)
            {
                if (i % 2 == 0)
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }

        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}