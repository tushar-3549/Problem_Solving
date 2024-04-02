#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s, t;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 1) s += "##";
            else s += "..";
        }
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 1) t += "..";
            else t += "##";
        }
        for(int i = 1; i <= n; i++)
            if(i % 2 == 1)
                cout << s << "\n" << s << endl;
            else
                cout << t << "\n" << t << endl;
    }
    return 0;
}
