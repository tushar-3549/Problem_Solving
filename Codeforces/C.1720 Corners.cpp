// https://codeforces.com/problemset/problem/1720/C

#include <bits/stdc++.h>
using namespace std;

#define        ll               long long int  
#define        print(x)         cout << (#x) << " = " << (x) << "\n"
#define        print2(x,y)      cout <<(#x)<<" = "<<(x)<<" and "<<(#y)<<" = "<<(y)<<"\n"
#define        endl             '\n'

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
    	int n, m;
        cin >> n >> m;
        // std::vector<string> arr(n);
        // for(int i = 0; i < n; i++)
        //     cin >> arr[i];
        char arr[n+1][m+1];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int mn = 5, res = 0, one = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] == '1')
                {
                    one++;
                    continue;
                }
                // arr[i][j] == 0

                int cnt = 0;
                if(i-1 >= 0 && j-1>= 0)
                {
                    if(arr[i-1][j-1] == '1')
                        cnt++;
                    if(arr[i-1][j] == '1')
                        cnt++;
                    if(arr[i][j-1] == '1')
                        cnt++;
                    mn = min(mn, cnt);
                }

                cnt = 0;
                if(i-1 >= 0 && j+1 < m)
                {
                    if(arr[i-1][j] == '1')
                        cnt++;
                    if(arr[i-1][j+1] == '1')
                        cnt++;
                    if(arr[i][j+1] == '1')
                        cnt++;
                    mn = min(mn, cnt);
                }

                cnt = 0;
                if(i+1 < n && j-1 >= 0)
                {
                    if(arr[i][j-1] == '1')
                        cnt++;
                    if(arr[i+1][j] == '1')
                        cnt++;
                    if(arr[i+1][j-1] == '1')
                        cnt++;
                    mn = min(mn, cnt);
                }

                cnt = 0;
                if(i+1 < n && j+1 < m)
                {
                    if(arr[i][j+1] == '1')
                        cnt++;
                    if(arr[i+1][j+1] == '1')
                        cnt++;
                    if(arr[i+1][j] == '1')
                        cnt++;
                    mn = min(mn, cnt);
                }
            }
        }

        if(one == n*m)
            res = (n*m) - 2;
        else
        {
            int add;
            if(mn == 0)
                add = 0;
            else if(mn == 1)
                add = 1;
            else
                add = 2;

            res = one - mn + add;
        }

        cout << res << endl;
    }

    return 0;
} 
