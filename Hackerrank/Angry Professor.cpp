#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, cnt = 0;
        cin >> n >> k;
        int arr[n+1];
        for(int i = 0;i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] <= 0)
            {
                cnt ++;
            }
        }
        if(cnt < k)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}
