

#include <iostream>
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
        if(n % 2 == 1)
        {
            bool f = 0;
            for(int i = 2; i * i <= n; i++)
            {
                if(n % i == 0)
                {
                    n += i;
                    f = 1;
                    break;
                }
            }
            if(f == 0)
            {
                n += n;
            }
            cout << (n + (k-1) * 2 ) << endl;
        }
        else
        {
            cout << (n + (k * 2)) << endl;
        }
    }

    return 0;
}
