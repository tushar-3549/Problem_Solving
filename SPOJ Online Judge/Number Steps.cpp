/*                        Author:   Md Tushar Ahmed 
                           From : Dhaka , Bangladesh
*/
#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#define tushar  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl      '\n'
#define mod     1000000007

typedef long long int ll;
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
    tushar;
    
    // SOLUTION
    int t;
    cin >> t;
    while(t--)
    {
      int x, y;
      cin >> x >> y;
      if(y == x or y == x - 2)
      {
        if(x % 2 == 1 and y % 2 == 1)
        {
          cout << x+y-1 << endl;
        }
        else
        {
          cout << x+y << endl;
        }
      }
      else
      {
        cout << "No Number" << endl;
      }
    }
    return 0;
}
