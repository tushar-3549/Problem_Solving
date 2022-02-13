// live contest
// code_forces div 2 - 767
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, arr1[100], arr2[1000];
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        vector < pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            p.push_back(make_pair(arr1[i], arr2[i]));
        }
        sort(p.begin(), p.end());
        int res = k;
        for (int i = 0; i < n; i++)
        {
            if (p[i].first <= res)
            {
                res += p[i].second;
            }
            else if (p[i].first > res)
            {
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
