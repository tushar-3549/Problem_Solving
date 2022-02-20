

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n>> m;
        int c = 0;
        for(int i=1;i<=n ;i++)
        {
            if(i % 2 != 0)
            {
                for(int j=1;j<=m;j++)
                {
                    if( j % 2 != 0)
                    {
                        c++;
                    }
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}
