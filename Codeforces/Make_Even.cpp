#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int even = 0;
        for(int i=0;i<s.size();i++)
        {
            int x = s[i]-'0';
            if(x % 2 == 0)
            {
                even++;
            }
        }
        if(even == 0)
            cout << -1 << endl;
        else
        {
            int x = s[s.size()-1]-'0';
            int y = s[0]-'0';
            if(x % 2 == 0)
                cout << 0 << endl;
            else if(y % 2 == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
