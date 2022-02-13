#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char sit[n][5];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> sit[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j += 3)
        {
            if (sit[i][j] == 'O' && sit[i][j + 1] == 'O')
            {
                sit[i][j] = sit[i][j + 1] = '+';
                flag = true;
                break;
            }
        }
        if (flag == true) 
        {
            break;
        }
    }
    if (flag == false)
    {
        cout << "NO\n";
    }
    // if (flag == true)
    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << sit[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}