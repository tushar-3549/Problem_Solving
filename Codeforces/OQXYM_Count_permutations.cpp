#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll fact = 1;
        for (int i = 3; i <= 2 * n; i++)
        {
            fact *= i;
            fact %= mod;
        }
        cout << fact << endl;
    }
    return 0;
}