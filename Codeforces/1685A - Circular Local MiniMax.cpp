#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n+1];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr,arr+n);
        vector < int > v;
        if(n % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        for(int i =0, j = n/2; i < n/2; i++, j++)
        {
            v.push_back(arr[i]);
            v.push_back(arr[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);

        int ans = 0;
        for(int i = 1; i < v.size() - 1; i++)
        {
            if(v[i] > v[i+1] and v[i] > v[i-1])
                continue;
            else if(v[i] < v[i+1] and v[i] < v[i-1])
                continue;
            else
            {
                ans = 1;
                break;
            }
        }
        if(ans == 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }

    }

    return 0;
}
