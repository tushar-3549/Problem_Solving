#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ans = "", s;
        cin >> s;
        stack<char> ch;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case '(':
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                ch.push(s[i]);
                break;
            case ')':
                ans += ch.top();
                ch.pop();
                break;

            default:
            ans += s[i];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}