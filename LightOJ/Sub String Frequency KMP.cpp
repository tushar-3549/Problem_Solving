// https://lightoj.com/problem/substring-frequency

#include <bits/stdc++.h>
using namespace std;
#define  ll      long long int
#define  pb      push_back
vector <int> createArray(string pattern)
{
    vector <int> lps(pattern.length());
    int ind = 0;
    for(int i = 1; i < pattern.length();)
    {
        if(pattern[ind] == pattern[i])
        {
            ind++;
            lps[i] = ind;
            i++;
        }
        else
        {
            if(ind != 0)
                ind = lps[ind - 1];
            else
            {
                lps[i] = ind;
                i++;
            }
        }
    }
    return lps;
}

int KMP(string text, string pattern)
{
    vector <int> lps = createArray(pattern);
    // for(auto x : lps)
    //     cout << x << ' ';
    // cout << endl;
    
    int i = 0, j = 0;
    int total = 0;
    while(i < text.length())
    {
        if(text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j != 0)
                j = lps[j-1];
            else
                i++;
        }
        if(j == pattern.length())
        {
            total++;
            j = lps[j-1];
        }
    }
    return total;
}

int main()
{
    int t;
    cin >> t;
    string text, pattern;
    for(int i = 1; i <= t; i++)
    {
        cin >> text >> pattern;
        //getline(cin,text);
        //getline(cin,pattern);
        int total = KMP(text,pattern);
        cout << "Case " << i << ": " << total << endl;
    }

    return 0;
}
