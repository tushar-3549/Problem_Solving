#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26], maxi = 0, area;
    for(int i = 0; i< 26; i++)
    {
        cin >> arr[i];
    } 
    string s;
    cin >> s;
    int len = s.size();
    int ch;
    for(int i = 0; i< len; i++)
    {
        ch = s[i] - 97;
        maxi = max(maxi , arr[ch]);
    }
    area = maxi * len;
    cout << area << endl;
    return 0;
}
