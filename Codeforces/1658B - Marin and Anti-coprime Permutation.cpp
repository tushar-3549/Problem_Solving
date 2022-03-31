/*                               بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم 
                         Author:   Md Tushar Ahmed 
                           From : Dhaka , Bangladesh
*/

#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#define Tushar_Ahmed  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define sq(x)         (x)*(x)
#define PI            acos(-1.0)
#define endl          '\n'
//#define mod          1000000007
#define mod            998244353
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      (x/gcd(x,y))*y 

typedef long long int ll;
const int MAX_N = 1e5 + 5;
const ll INF = 1e9;
// FACTORIAL CHECK
ll fact(int n) 
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return (n * fact(n - 1)) % mod;
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
    Tushar_Ahmed; // FAST INPUT OUTPUT
    
   // SOLUTION
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 2 == 1) {
            cout << 0 << endl;
        }
        else {
            cout << (ll)(( fact(n/2) % mod) * (fact(n/2) % mod )) % mod << endl; 
            /* ll ans = (( fact(n/2) % mod) * (fact(n/2) % mod )) % mod << endl;
            cout << ans << endl; */
        }
    }
    return 0;
}
