// codechef
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        if(a+b+c > d+e+f)
        {
            cout << "DRAGON\n";
        }
        else if(a+b+c < d+e+f)
        {
            cout << "SLOTH\n";
        }
        else
        {
            if(a>d)
                cout << "DRAGON\n";
            else if(d>a)
                cout << "SLOTH\n";
            else
            {
                if(b>e)
                    cout << "DRAGON\n";
                else if(b<e)
                    cout << "SLOTH\n";
                else
                    cout << "TIE\n";
            }
        }
    }
    return 0;
}
