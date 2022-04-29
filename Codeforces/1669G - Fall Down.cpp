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
#define mod           1000000007
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      (x/gcd(x,y))*y 

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
    Tushar_Ahmed; // FAST INPUT OUTPUT
    
   // SOLUTION
    int t;
    cin >> t;
    while( t-- ) {
        int n, m;
        cin >> n >> m;
        string s[n+1];
        for(int i=0; i<n; i++)
            cin >> s[i];
        for(int col=0; col<m; col++) {
            int flor = n-1;
            while(flor > -1 and s[flor][col] != '.') {
                if(s[flor][col] == 'o') {
                    flor--;
                    break;
                }
                flor--;
            }
            if(flor < 0) {
                continue;
            }
            int cur = flor;
            while(cur > -1) {
                if(s[cur][col] == '*') {
                    swap(s[flor][col], s[cur][col]);
                    flor--;
                }
                else if(s[cur][col] == 'o') {
                    flor = cur-1;
                    //break;
                }
                //flor--;
                cur--;
            }
        }
        for(int i=0; i<n; i++) {
                cout << s[i] << endl;
            }
    }
    return 0;
}
