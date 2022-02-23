/*                        Author:   Md Tushar Ahmed
                           From : Dhaka , Bangladesh
*/
#include <bits/stdc++.h>

using namespace std;

//#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("avx,avx2,avx512,fma")

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define tushar  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl      '\n'
#define mod     1000000007

typedef long long int ll;
const int MAX_N = 1e5 + 5;
const ll INF = 1e9;
// FACTORIAL CHECK
int fact(int n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}
// PRIME CHECK
bool isPrime(int num)
{
    bool flag = true;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
// MAIN FUNCTION

int main()
{
    tushar;

    // SOLUTION
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n+1];
        vector<int>v;
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            v.push_back(arr[i]);
        }
        if(is_sorted(v.begin(),v.end()))
            cout << 0 << endl;
        else if(arr[n-1] == arr[n])
        {
            cout << n-2 << endl;
            for(int i = 1; i <= n-2; i++)
                cout << i << " "<< n-1 << " " << n << endl;
        }
        else if(arr[n-1] < arr[n] && arr[n] >= 0)
        {
            cout << n-2 << endl;
            for(int i = 1; i <= n-2; i++)
                cout << i << " "<< n-1 << " " << n << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}

