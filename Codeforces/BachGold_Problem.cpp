// Codeforces problems Exercise
#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    // Luntik and Concerts :
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll sum = 0;
        sum = a + 2 * b + 3 * c;
        if (sum % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    
    // PolandBall and Hypothesis :
    
    // int n;
    // cin >> n;
    // for (int m = 1; m <= n; m++)
    // {
    //     int x = n * m + 1;
    //     for (int i = 2; i * i <= n + 1000; i++)
    //     {
    //         if (x % i == 0 && x != i)
    //         {
    //             cout << m << endl;
    //             return 0;
    //         }
    //     }
    // }

    // bach gold problem :

    // int n;
    // cin >> n;
    // if (n % 2 == 0)
    // {
    //     cout << n / 2 << endl;
    //     for (int i = 0; i < n / 2; i++)
    //     {
    //         cout << 2 << " ";
    //     }
    //     cout << endl;
    // }
    // else if (n % 2 == 1)
    // {
    //     cout << n / 2 << endl;
    //     for (int i = 1; i < n / 2; i++)
    //     {
    //         cout << 2 << " ";
    //     }
    //     cout << 3 << " " << endl;
    // }
    // return 0;
}