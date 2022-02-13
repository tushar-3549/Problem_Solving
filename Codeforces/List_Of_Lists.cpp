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
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int c = 1;
        int mx = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] == arr[i])
            {
                c++;
                mx = max(mx, c);
            }
            else
            {
                c = 1;
            }
        }
        if (n == mx)
        {
            cout << 0 << endl;
            continue;
        }
        if (mx == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else
            cout << (n - mx) + 1 << endl;
    }
    return 0;
}