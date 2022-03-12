/*                                            بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم 
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
#define mod  998244353
typedef long long int ll;
const int MAX_N = 1e5 + 5;
const ll INF = 1e9;

// MAIN FUNCTION 

int main()
{
    Tushar_Ahmed; // FAST INPUT OUTPUT
    
   // SOLUTION
    ll n;
    cin >> n;
    ll dp[n+1][11];
    memset(dp,0,sizeof(dp));
    for(ll i = 1; i <= 9; i++) {
        dp[1][i] = 1;
    }
    for(ll i = 2; i <= n; i++) {
        for(ll j = 1; j <= 9; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1] + dp[i-1][j+1]) % mod;
        }
    }
    ll ans = 0;
    for(ll i = 1; i <= 9; i++) {
        ans = (ans + dp[n][i]) % mod;
    }
    cout << ans << endl;
    
    return 0;
}
