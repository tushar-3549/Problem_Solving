#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, i;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] > c)
        {
            count = 1;
        }
        else
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}