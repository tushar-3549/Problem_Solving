/*                          Author:   Md Tushar Ahmed
                               From : Dhaka , Bangladesh
*/
#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define  ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define  Tushar_Ahmed  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define  sq(x)         (x)*(x)
#define  PI            acos(-1.0)
#define  endl          '\n'
#define  mod           1000000007
#define  gcd(x,y)      __gcd(x,y)
#define  lcm(x,y)      (x/gcd(x,y))*y  

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
bool is_parrallel_X(int x1, int y1, int x2,int  y2)
{
    return ( y1 > 0 and y1 == y2);
}
int main()
{
    Tushar_Ahmed; // FAST_INPUT_OUTPUT 

    // SOLUTION
    int t;
    cin >> t;
    while(t--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int ans = 0;
        if(is_parrallel_X(x1,y1,x2,y2) and y3 < y1)
        {
            ans += abs(x1 - x2);
        }
        if(is_parrallel_X(x1,y1,x3,y3) and y2 < y1)
        {
            ans += abs(x1 - x3);
        }
        if(is_parrallel_X(x2,y2,x3,y3) and y1 < y2)
        {
            ans += abs(x2 - x3);
        }
        cout << ans << endl;
    }

    return 0;
}
