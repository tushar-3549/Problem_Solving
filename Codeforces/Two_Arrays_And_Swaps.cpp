#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr1[n], arr2[n], sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            sum1 += arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        reverse(arr2, arr2 + n);
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] < arr2[i])
            {
                swap(arr1[i], arr2[i]);
                k++;
                if (k == m)
                    break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum2 += arr1[i];
        }
        if (m == 0)
            cout << sum1 << endl;
        else
            cout << sum2 << endl;
    }
    return 0;
}