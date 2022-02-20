

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n>> x >> y;
        int c = 0;
        int cr = (n+1)/2;
        int xy = x+y;
        if(xy % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        
    }

    return 0;
}
