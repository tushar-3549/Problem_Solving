#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl      '\n'
#define mod 1000000007
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n+1];
        for(int i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for(int i = 0;i < n - 1;i++)
        {
            int mx = max(arr[i],arr[i+1]);
            int mn = min(arr[i],arr[i+1]);
            while(mn * 2 < mx)
            {
                cnt ++;
                mn *= 2;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}