
#include <bits/stdc++.h>

using namespace std;

 
#define Tushar_Ahmed  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;

int main()
{
    Tushar_Ahmed; // FAST INPUT OUTPUT
    
    // SOLUTION
    double a,b,c,x;
    cin >> a >> b >> c >> x;
    if(a >= x)
    {
        cout << 1 << endl;
    }
    else if(b >= x)
    {
        cout << c / abs(b - a) << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    
    
    return 0;
}
