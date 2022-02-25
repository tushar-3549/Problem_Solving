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
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector <int> odd, even;
        for(int i = 1; i <= 2*n; i++)
        {
            int x;
            cin >> x;
            if(x % 2)
            {
                odd.push_back(i);
            }
            else 
            {
                even.push_back(i);
            }
        }
        for(int i = 1; i < odd.size() && cnt < n - 1; i += 2)
        {
            cout << odd[i - 1] << " " << odd[i] << endl;
            cnt ++;
        } 
        for(int i = 1; i < even.size() && cnt < n - 1; i += 2)
        {
            cout << even[i - 1] << " " << even[i] << endl;
            cnt ++;
        } 
    }

    return 0;
}
