#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int cnt = 0, dig = x % 10;
        while(x > 0)
        {
            x /= 10;
            cnt ++;
        }
        if(cnt == 1)
        {
            cout << ((dig * 10) - 10) + 1 << endl;
        }
        else if(cnt == 2)
        {
            cout << ((dig * 10) - 10) + 3 << endl;
        }
        else if(cnt == 3)
        {
            cout << ((dig * 10) - 10) + 6 << endl;
        }
        else if(cnt == 4)
        {
            cout << ((dig * 10) - 10) + 10 << endl;
        }
    }
    return 0;
}