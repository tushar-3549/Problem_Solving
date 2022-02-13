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
    string s;
    cin >> s;
    ll pivot;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '^')
        {
            pivot = i;
            break;
        }
    }
    ll sum = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '^' && s[i] != '=')
        {
            sum += (s[i] - '0') * (i - pivot);
        }
    }
    if(sum == 0)
    {
        cout << "balance" << endl;
    }
    else if(sum < 0)
    {
        cout << "left" << endl;
    }
    else
    {
        cout << "right" << endl;
    }
    return 0;
}