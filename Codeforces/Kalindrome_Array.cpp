#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int solve(vector<int> &v)
{
    int i = 0, j = v.size() - 1;
    int ans = 1;
    while (i < j)
    {
        if (v[i] != v[j])
        {
            ans = 0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
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
        int i = 0, j = n - 1, ans = -1, a , b;
        while (i < j)
        {
            if (arr[i] != arr[j])
            {
                ans = 1;
                a = arr[i];
                b = arr[j];
                break;
            }
            i++;
            j--;
        }
        if (ans == -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<int> v1, v2;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == a)
                    continue;
                v1.push_back(arr[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == b)
                    continue;
                v2.push_back(arr[i]);
            }
            int ans1 = solve(v1);
            int ans2 = solve(v2);
            if (ans1 == 1 || ans2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}