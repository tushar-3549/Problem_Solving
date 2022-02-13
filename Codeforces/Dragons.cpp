#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[1000];
    int s, l;
    cin >> s >> l;
    pair<int, int> arr[1000];
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    int cnt = 0;
    sort(arr, arr + l);
    for (int i = 0; i < l; i++)
    {
        if (s <= arr[i].first)
        {
            cnt++;
            break;
        }
        else
        {
            s += arr[i].second;
        }
    }
    if (cnt > 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}