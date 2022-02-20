#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if(k == 1)
        {
            cout << "YES" << endl;
            for(int i = 1; i <= n; i++)
            {
                cout << i << endl;
            }
        }
        else
        {
            if(n % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                int odd = 1, even = 2;
                for(int i = 1; i <= n; i++)
                {
                    if(i % 2 == 1)
                    {
                        //cout << "YES" << endl;
                        for(int j = 1; j <= k; j++)
                        {
                            cout << odd << " ", odd+=2;
                        }
                    }
                    else
                    {
                        for(int j = 1; j <= k; j++)
                        {
                            cout << even << " ", even+=2;
                        }
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}
