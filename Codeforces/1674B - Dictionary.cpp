#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
map < string, int > pos;
void solve()
{
    string s;
    cin >> s;
    cout << pos[s] << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    vector < string > ss;
    for(char c = 'a'; c <= 'z'; c++)
    {
        for(char cc = 'a'; cc <= 'z'; cc++)
        {
            if(c == cc)
                continue;
            string s = "";
            s += c;
            s += cc;
            ss.push_back(s);
        }
    }
    sort(ss.begin(),ss.end());
    for(int i = 0; i < ss.size(); i++)
    {
        pos[ss[i]] = i + 1;
    }

    int t;
    cin >> t;
    //map < string, int > pos;
    while(t--)
    {
        solve();
    }

    return 0;
}
