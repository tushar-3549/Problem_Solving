#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n+1];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr,arr+n);
        arr[n] = arr[0];
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += max(arr[i],arr[i+1]);
        }
        sum += n;
        if(sum <= m)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
