#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        string s[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'B')
                {
                    ans = 1;
                    break;
                }
            }
        }
        int r1 = 0, c1 = 0;
        for (int i = 0; i < m; i++)
        {
            if (s[r - 1][i] == 'B')
            {
                r1 = 1;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i][c - 1] == 'B')
            {
                c1 = 1;
                break;
            }
        }
        if(ans == 0)
           cout << -1 << endl;
        else if(s[r-1][c-1] == 'B')
           cout << 0 << endl;
        else if(r1 == 1 || c1 == 1)
           cout << 1 << endl;
        else
           cout << 2 << endl;
    }
    return 0;
}

/*// Live contest codeforces Div -  766
// A . Not Shading

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,r,c;
        cin >>n>>m>>r>>c;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> arr[i][j];
            }
        }
        r = r - 1;
        c = c - 1;
        int sum = n-r+m-c;
        sum = sum - 1;
        assert(t+m+n<199);
        if(arr[r][c] == 'B')
        {
            cout << 0 << endl;
            continue;
        }
        bool white = true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j] == 'B')
                {
                    white = false;
                }
            }
        }
        if(white)
        {
            cout << -1 << endl;
        }
        else if(arr[r][c] == 'W')
        {
            bool black = false;
            for(int i = 0; i < n; i++)
            {
                if(arr[i][c] == 'B')
                {
                    black = true;

                }

            }
            for(int j = 0; j < m; j++)
            {
                if(arr[r][j] == 'B')
                {
                    black = true;
                }
            }
            if(!black || sum == 'B')
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}
*/
/*
9
3 5 1 4
WBWWW
BBBWB
WWBBB
4 3 2 1
BWW
BBW
WBB
WWB
2 3 2 2
WWW
WWW
2 2 1 1
WW
WB
5 9 5 9
WWWWWWWWW
WBWBWBBBW
WBBBWWBWW
WBWBWBBBW
WWWWWWWWW
1 1 1 1
B
1 1 1 1
W
1 2 1 1
WB
2 1 1 1
W
B
*/
