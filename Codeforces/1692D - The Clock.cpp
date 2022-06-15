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

#define    lower(s)        transform(s.begin(),s.end(),s.begin(),::tolower)
#define    upper(s)        transform(s.begin(),s.end(),s.begin(),::toupper)
 
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
#define    min3(a,b,c)     min(a,min(b,c))
#define    max3(a,b,c)     max(a,max(b,c))  
#define    ff              first
#define    ss              second

// -------------FACTORIAL CHECK---------
int fact(int n) 
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}
// --------------PRIME CHECK------------
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

// -------------MAIN FUNCTION----------- 

int main()
{
    Tushar_Ahmed; // FAST INPUT OUTPUT
    
   // SOLUTION
   
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int x;
        cin >> x;
        
        int i = x/60;
        int j = x%60;
        
        int y = 10 * (s[0] - '0') + (s[1] - '0');
        int z = 10 * (s[3] - '0') + (s[4] - '0');

        string res = "";
        res += s[0];
        res += s[1];
        res += s[3];
        res += s[4];

        int fnl = 0;
        if (res[0] == res[3] and res[1] == res[2]) {
            fnl ++;
        }
        
        string tus = res;

        while (1) {
            
            y += i;
            z += j;
            y += z / 60;
            z %= 60;
            y %= 24;
            
            res = "";
            if (y / 10 == 0) {
                res += '0';
            }
            res += to_string(y);
            
            if (z / 10 == 0) {
                res += '0';
            }
            
            res += to_string(z);
            if (res == tus) {
                 break;
            }
            if (res[0] == res[3] && res[1] == res[2]){
                   fnl ++;
            }
  }
        
  cout << fnl << endl;
        
        








        
       /*  bool f = false;
        char ch[10][10];
        for(int i = 1; i <= 8; i++) {
            for(int j = 1; j <= 8; j++) {
                cin >> ch[i][j];
            }
        }
        int r, c;
        for(int i = 1; i <= 8; i++) {
            int x = 0;
            for(int j = 1; j <= 8; j++) {
                if(ch[i][j] == '#') {
                    x++;
                    r = i;
                    c = j;
                }
            }
            if(x > 1) {
                f = true;
            }
            if(f == true and x == 1) {
                break;
            }
        }
        cout << r << " " << c << endl;

 */











        
      /*  int n;
        cin >> n;
        int z = n;
        vector<int>v;
        set<int>s;
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.pb(x);
            s.insert(x);
            mp[x]++;
        }
        v.assign(s.begin(),s.end());
        for(int i = 0; i < v.size(); i++) {
            n -= (mp[v[i]] - 1);
            
        }
        if((z-n) % 2 == 1) {
            n--;
        }
        cout << n << endl; */
       
    }

    
    return 0;
}

