#include <bits/stdc++.h>
#define Dpos(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    int i = 1;
    while (test_case--)
    {
        double ab, ac, bc, ratio;
        cin >> ab >> ac >> bc >> ratio;
        double New_ratio = ratio / (ratio + 1);

        cout << "Case " << i++ << ": " << Dpos(6) << ab*sqrt(New_ratio) << endl;
    }
}
