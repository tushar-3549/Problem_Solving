#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
          int n;
          cin >> n;
          string s, t;
          cin >> s >> t;
          int s1 = 0, t1 = 0;
          for(int i = 0; i < n; i++)
          {
               if(s[i] == t[i])
                 continue;
               if(s[i] == '1') s1++;
               else if(t[i] == '1') t1++;
          }
          cout << max(s1, t1) << endl;
     }
     return 0;
}
