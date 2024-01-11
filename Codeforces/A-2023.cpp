#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
          int n, k;
          cin >> n >> k;
          long long int p = 1;
          for(int i = 0; i < n; i++)
          {
               int x;
               cin >> x;
               p *= x;
          }
          if(2023 % p == 0)
          {
               cout << "YES\n";
               for(int i = 0; i < k-1; i++)
               {
                    cout << 1 << " ";
               }
               cout << 2023/p << endl;
          }
          else 
          {
               cout << "NO\n";
          }
     }
     return 0;
}
