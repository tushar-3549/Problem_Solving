#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[] = {"purple", "green", "blue", "red", "orange", "yellow"};
    map< string, int >mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    vector < string > ans;
    for(int i = 0; i < 6; i++)
    {
        if(mp[arr[i]] == 0)
            ans.push_back(arr[i]);
    }
    cout << ans.size() << endl;
    for(int i =0; i < ans.size(); i++)
    {
        if(ans[i] == "purple")
            cout <<"Power\n";
        else if(ans[i] == "green")
            cout <<"Time\n";
        else if(ans[i] == "blue")
            cout <<"Space\n";
        else if(ans[i] == "orange")
            cout <<"Soul\n";
        else if(ans[i] == "red")
            cout <<"Reality\n";
        else
            cout << "Mind\n";
    }


    return 0;
}
