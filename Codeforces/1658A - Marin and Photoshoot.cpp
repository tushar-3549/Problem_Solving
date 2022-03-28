#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0' and i+1<n and s[i+1] == '0')
                ans += 2;
            if(s[i] == '1' and i+1<n and s[i+1] == '0' and s[i-1] == '0')
                ans += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
