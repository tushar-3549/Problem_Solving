#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc --)
    {
        int n;
        cin >> n;
        vector <int> even, odd;
        vector <int> v(n+1);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(v[i] % 2 == 0)
            {
                cout << v[i] << " ";
            }
            else 
            {
                odd.push_back(v[i]);
            }
        }
        for(auto k : odd)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
