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
#define    mp              make_pair
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
    int n, m;
    cin >> n >> m;
    char s[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    int cnt = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            string ans ="";
            ans += s[i-1][j-1];
            ans += s[i-1][j];
            ans += s[i][j];
            ans += s[i][j-1];
            sort(ans.begin(), ans.end());
            if(ans == "acef")
                cnt++;
        }
    }
    cout << cnt << endl;


    
    return 0;
}

