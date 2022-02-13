#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>num;
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            num.push_back(x);
        }
        int y = __gcd(num[0],num[1]);
        for(int i=2; i<n; i++)
        {
            y = __gcd(y,num[i]);
        }
        for(int i=0; i<n; i++)
            cout << (num[i]/y)<< " ";
        cout << endl;
    }
    return 0;
}
