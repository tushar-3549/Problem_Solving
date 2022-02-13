// Live contest
// code forces div 2 770
// Reverse and Concatenated

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void contest()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> ch;
    for (auto a : s)
    {
        ch.insert(a);
    }
    if (ch.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (k == 0)
    {
        cout << 1 << endl;
        return;
    }
    bool b = false;
    int i = 0, j = s.size() - 1;
    while (j > i)
    {
        if (s[i] == s[j])
        {
            b = true;
        }
        else
        {
            b = false;
            break;
        }
        i++;
        j--;
    }
    if (b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        contest();
    }
    return 0;
}
/*
4
3 2
aab
3 3
aab
7 1
abacaba
2 0
ab
*/
