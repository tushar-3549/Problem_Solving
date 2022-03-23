#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c, m;
        cin >> n >> c >> m;
        int cc = n/c;
        int tc = cc;
        while(cc >= m)
        {
            cc -= m;
            tc ++;
            cc ++;
        }
        cout << tc << endl;
    }
    return 0;
}
