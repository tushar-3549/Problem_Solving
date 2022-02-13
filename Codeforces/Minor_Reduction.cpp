// Live contest
// B. Minor Reduction
#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void answer()
{
    string s;
    cin >> s;
    bool b = false;
    for (int i = s.size() - 1; i > 0; i--)
    {
        int temp = s[i] - 48 + s[i - 1] - 48;
        if (temp > 9)
        {
            b = true;
            s[i] = temp % 10 + 48;
            s[i - 1] = temp / 10 + 48;
            break;
        }
    }
    if (b)
    {
        cout << s << endl;
        return;
    }
    string x = "";
    x += s[0] - 48 + s[1];
    for (int i = 2; i < s.size(); i++)
    {
        x += s[i];
    }
    cout << x << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        answer();
    }
}