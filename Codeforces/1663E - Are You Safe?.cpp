#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n; cin >> n;
    char s[110][110];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> s[i][j];
    for (int i = 0; i < n - 6; i++)
        for (int j = 0; j < n - 6; j++)
            if(s[i][j] == 't' && s[i + 1][j + 1] == 'h' && s[i + 2][j + 2] == 'e' && s[i + 3][j + 3] == 's' && s[i + 4][j + 4] == 'e' && s[i + 5][j + 5] == 'u' && s[i + 6][j + 6] == 's') {
                cout << "YES\n";
                return 0;
            }

    cout << "NO\n";
    return 0;
}
