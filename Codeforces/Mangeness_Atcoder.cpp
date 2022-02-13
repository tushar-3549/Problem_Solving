#include <iostream>
using namespace std;
int main()
{
    int h, w;
    int a[51][51];
    cin >> h >> w;
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= w; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i_1 = 1; i_1 <= h; i_1++)
    {
        for(int i_2 = i_1+1; i_2 <= h; i_2++)
        {
            for(int j_1 = 1; j_1 <= w; j_1++)
            {
                for(int j_2 = j_1+1; j_2 <= w; j_2++)
                {
                    if(a[i_1][j_1] + a[i_2][j_2] > a[i_2][j_1] + a[i_1][j_2])
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
