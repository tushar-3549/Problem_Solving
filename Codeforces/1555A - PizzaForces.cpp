/*                                       بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم 
                                        Author:   Md Tushar Ahmed 
                                        From : Dhaka , Bangladesh
*/

#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define    ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define    Tushar_Ahmed  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define    sq(x)           (x)*(x)
#define    PI              acos(-1.0)
#define    endl            '\n'
#define    mod             1000000007
#define    gcd(x,y)        __gcd(x,y)
#define    lcm(x,y)        (x/gcd(x,y))*y 
#define    ll              long long int
#define    ull             unsigned long long int
#define    ui              unsigned int
#define    INF             LLONG_MAX
#define    pb              push_back
#define    all_0(x)        memset(x, 0, sizeof(x));
#define    all_1(x)        memset(x, 1, sizeof(x));

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
    while(t--)
    {
        // A . Pizza forces
        ll n;
        cin >> n;
        if ( n % 2 == 1)
            // cout << n + 1 << endl;
            n ++;
        if( n < 6 )
            // cout << 15 << endl;
            n = 6;
        ll ans =  n * 5 / 2 ;
        cout << ans << endl;



    //     int n;
    //     cin >> n;
    //     string s;
    //     cin >> s;
    //     string ans = "1";
    //     int check;
    //     if(s[0] == '1')
    //         check = 2;
    //     else 
    //         check = 1;
    //     for(int i = 1; i < s.size(); i++)
    //     {
    //         if(s[i] == '0')
    //         {
    //             if(check != 1 )
    //             {
    //                 check = 1;
    //                 ans += '1';
    //             }
    //             else 
    //             {
    //                 check = 0;
    //                 ans += '0';
    //             }
    //         }
    //         else if(s[i] == '1')
    //         {
    //             if(check != 2)
    //             {
    //                 check = 2;
    //                 ans += '1';
    //             }
    //             else 
    //             {
    //                 check = 1;
    //                 ans += '0';
    //             }
    //         }
    //     }
    //     cout << ans << endl;
     }

    return 0;
}

