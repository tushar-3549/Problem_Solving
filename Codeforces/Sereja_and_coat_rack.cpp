#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int m;
    cin >> m;
    if (m <= n)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum - (m - n) * d << endl;
    }
    
    return 0;
}