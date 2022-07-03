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
#define      min3(a,b,c)     min(a,min(b,c))
#define      max3(a,b,c)     max(a,max(b,c))  
#define      ff              first
#define      ss              second

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
    
    /* int t;
    cin >> t;
    while(t--) {
        int n, z;
        cin >> n >> z;
        int res = INT_MIN;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            res = max(res, (x|z));
        }
        cout << res << endl;
    } */
    
   /*  int a = 4 , b = 3, c = 2;
    int aa = a^b;
    int ans = aa^c;
    cout << ans << endl;  // output : 5 */

   /*  int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n+1];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << arr[0] << endl;
    } */

    /* int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        bool ok = false;
        int cnt = 0, ans = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') {
                cnt = 0;
                ok = true;
            }
            if(ok == true and s[i] == 'P') { // (ok and s[i] == 'P')
                cnt ++;
                ans = max(ans, cnt);
            }
        }
        cout << ans << endl;
    } */

    // https://codeforces.com/problemset/problem/835/A
    /* int s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int ans1 = s*v1+2*t1;
    int ans2 = s*v2+2*t2;
    if(ans1 < ans2) {
        cout << "First\n";
    }
    else if(ans1 > ans2) {
        cout <<"Second\n";
    }
    else {
        cout << "Friendship\n";
    } */

    /* int a,b,c;
    cin >> a >> b >> c;
    if(a>b)swap(a,b);
	if(b>c)swap(b,c);
    //cout << a << " " << b << " " << c;
    if(c>=(c-a)+(c-b))
        cout << c << endl;
    else
        cout << -1 << endl;
 */
   /*  int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll sum = n*(n+1)/2;
        for(int i = 1; i <= n; i *= 2) {
            sum -= 2ll*i;
        }
        cout << sum << endl;
    } */

    /* int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >>  b;
        cout << min3(a, b, (a+b)/3) << endl;
    } */

    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int mx = 0;
		for (auto &it : a) {
			cin >> it;
			mx = max(mx, it);
		}
		int idx = -1;
		for (int i = 0; i < n; ++i) {
            if(a[i] != mx) continue;
			if (i > 0 && a[i - 1] != mx) idx = i + 1;
			if (i < n - 1 && a[i + 1] != mx) idx = i + 1;
		}
		cout << idx << endl;
	}

    
    return 0;
}

