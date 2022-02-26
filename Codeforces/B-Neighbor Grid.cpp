/*                        Author:   Md Tushar Ahmed
                           From : Dhaka , Bangladesh
*/
#include <bits/stdc++.h>

using namespace std;

/* #pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,avx512,fma") */

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define Tushar  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
    Tushar;

    // SOLUTION
    int t;
    cin >> t;
    read:
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n+1][m+1], brr[n+1][m+1];
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
            }
        } 
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if((i == 1 and j == 1) || (i == n and j == m) || (i == 1 and j == m) || (i == n and j == 1))
                {
                    brr[i][j] = 2;
                }
                else if(i == 1 || j == 1 || i == n || j == m)
                {
                    brr[i][j] = 3;
                }
                else
                {
                    brr[i][j] = 4;
                }
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(arr[i][j] > brr[i][j])
                {
                    cout << "NO" << endl;
                    goto read;
                }
            }
        }
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cout << brr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
