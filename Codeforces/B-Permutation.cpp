                           /* ***************************************
                            *             بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم             *
                            |         Author: Md Tushar Ahmed       |
                            *           "Never Give Up"             *
                            |          Dhaka, Bangladesh            |
                            * ***************************************/

#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define      ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define      Tushar_Ahmed  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define      lower(s)        transform(s.begin(),s.end(),s.begin(),::tolower)
#define      upper(s)        transform(s.begin(),s.end(),s.begin(),::toupper)
 
#define      sq(x)           (x)*(x)
#define      PI              acos(-1.0)
#define      endl            '\n'
#define      mod             1000000007
#define      gcd(x,y)        __gcd(x,y)
#define      lcm(x,y)        (x/gcd(x,y))*y 
#define      ll              long long int
#define      ull             unsigned long long int
#define      ui              unsigned int
#define      INF             LLONG_MAX
#define      pb              push_back
#define      all(x)          x.begin(),x.end()             
#define      min3(a,b,c)     min(a,min(b,c))
#define      max3(a,b,c)     max(a,max(b,c))  
#define      ff              first
#define      ss              second


//-----------------------DEBUG-------------------
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
//#else
//#define dbg(args...)

// --------------------FACTORIAL CHECK-----------
int fact(int n) 
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}
// --------------------PRIME CHECK---------------
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
// --------------------PALINDROME CHECK-----------
bool palindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}

// --------------------MAIN FUNCTION---------------- 

int main()
{
    Tushar_Ahmed; // FAST INPUT OUTPUT
    
   // SOLUTION

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << 2 << endl;
        for(int i = 1; i <= n; i++) {
            if(i % 2) {
                for(int j = i; j <= n; j *= 2) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }

   
    
    return 0;
}
