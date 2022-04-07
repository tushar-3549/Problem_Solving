
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        while (1)
        {
            if (s.size() <= 1)
                break;
            if (s[0] == '(' && s[1] == ')')
            {
                s.erase(s.begin(), s.begin() + 2);
                count++;
            }
            else if (s[0] == '(' && s[1] == '(')
            {
                s.erase(s.begin(), s.begin() + 2);
                count++;
            }
            else if (s[0] == ')' && s[1] == ')')
            {
                s.erase(s.begin(), s.begin() + 2);
                count++;
            }
            else
            {
                int check = 0;
                for (int i = 2; i < s.size(); i++)
                {
                    if (s[i] == ')')
                    {
                        check = 1;
                        count++;
                        s.erase(s.begin(), s.begin() + i + 1);
                        break;
                    }
                }
                if (check == 0) // (!check) 
                    break;
            }
        }
        cout << count << " " << s.size() << endl;
    }
    return 0;
}
