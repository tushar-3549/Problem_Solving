#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n+1];
        map < int, int > mp;
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second > 1)
            {
                c1++;
                c2++;
            }
            else
            {
                if(c1>c2)
                    c2++;
                else
                    c1++;
            }
        }
        c2++;

        cout << min(c1, c2) << endl;
    }

    return 0;
}
