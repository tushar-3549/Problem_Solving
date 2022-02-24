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
  int ret[3];
  int exp[3];
  
  cin >> ret[0];
  cin >> ret[1];
  cin >> ret[2];

  cin >> exp[0];
  cin >> exp[1];
  cin >> exp[2];

  int fine = 0;
  if(exp[2] == ret[2])
  {
    if(exp[1] < ret[1])
    {
      fine = (ret[1] - exp[1]) * 500;
    }
    else if((exp[1] == ret[1]) && (exp[0] < ret[0]))
    {
      fine = (ret[0] - exp[0]) * 15;
    }
  }
    else if(exp[2] < ret[2])
    {
      fine = 10000;
    }
  cout << fine << endl;
 
  return 0;
}
