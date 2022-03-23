#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c, d, n=0, m=0, t, x, y, sum=0;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        int sum=0;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        if (sum==0)
        {
            cout << "NO" << endl;
            continue;
        }
        // else
        cout << "YES" << endl;
        sort(arr.begin(), arr.end());
        if(sum>0) reverse(arr.begin(), arr.end());
        for (int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
