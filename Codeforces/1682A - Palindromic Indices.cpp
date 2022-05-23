/*                               بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم 
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
#define    pb            push_back
#define    mp            make_pair

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
void ans(int a, int b) {
    int x = __gcd(a, b);
    cout << a/x << "/" << b/x << endl;
}
// MAIN FUNCTION 
int main()
{
    Tushar_Ahmed; // FAST INPUT OUTPUT
    
   // SOLUTION
    ll t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0;
        int mid = n/2;
        char c = s[mid];
        int i = mid, j = mid + 1;
        while(s[i--] == c) {
            res ++;
        }
        while(s[j++] == c) {
            res ++;
        }
        cout << res << endl;
    }
    return 0;
}


