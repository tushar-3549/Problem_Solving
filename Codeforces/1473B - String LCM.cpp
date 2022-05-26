#include <bits/stdc++.h>
using namespace std;
#define    gcd(x,y)      __gcd(x,y)
#define    lcm(x,y)      (x/gcd(x,y))*y
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string r1="", r2="";
        int l1 = s1.size(), l2 = s2.size();
        int LCM = lcm(l1, l2);
        for(int i = 0; i < LCM/l1; i++)
        {
            r1 += s1;
        }
        for(int i = 0; i < LCM/l2; i++)
        {
            r2 += s2;
        }
        if(r2 == r1)
            cout << r1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
