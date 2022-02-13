#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int k, p = 0;
    cin >> k;
    int x = s1.length();
    int y = s2.length();
    for(int i = 0; i < max(x,y); i++)
    {
        if(s1[i] == s2[i])
        {
            p++;
        }
        else
        {
            break;
        }
    }
    if(x + y <= k)
    {
        cout << "Yes" << endl;
    }
    else if(k - (x + y - 2 * p) >= 0)
    {
        if((k - (x + y - 2 * p)) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
        cout << "No" << endl;
    return 0;
}
