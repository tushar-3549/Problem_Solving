#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl      '\n'
#define mod 1000000007
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int ab = 0, ba = 0;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] == 'a' && s[i+1] == 'b')
               ab ++;
            else if(s[i] == 'b' && s[i+1] == 'a')
               ba ++;
        }
        if(ab == ba)
        {
            cout << s << endl;
        }
        else if(ba > ab)
        {
            s[0] = 'a';
            cout << s << endl;
        }
        else
        {
            s[0] = 'b';
            cout << s << endl;
        }
    }
    return 0;
}