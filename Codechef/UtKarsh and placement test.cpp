#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        string f,s,t;
        cin >> f >> s >> t;
        string x,y;
        cin >> x >> y;
        if(x == f || y == f)
        {
            cout << f << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
