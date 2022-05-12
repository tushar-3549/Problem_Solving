/*                                    بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم 
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
 
#define    sq(x)         (x)*(x)
#define    PI            acos(-1.0)
#define    endl          '\n'
#define    mod           1000000007
#define    gcd(x,y)      __gcd(x,y)
#define    lcm(x,y)      (x/gcd(x,y))*y 
#define    ll            long long int
#define    ull           unsigned long long int
#define    ui            unsigned int
#define    INF           LLONG_MAX
#define    modd          998244353

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
    
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int freq[26];
        memset(freq, 0 , sizeof(freq));
        int l = s.size();
        if(l % 2 != 0)
        {
            cout << -1 << endl;
        }
        else 
        {
            for(int i = 0; i < l/2; i++)
            {
                freq[s[i] - 97]++;
            }
            for(int i = l/2; i < l; i++)
            {
                freq[s[i] - 97]--;
            }
            int res = 0;
            for(int i = 0; i < 26; i++)
            {
                if(freq[i] > 0)
                {
                    res += freq[i];
                }
            }
            cout << res << endl;
        }
    }



    return 0;
}

