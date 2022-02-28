#include <bits/stdc++.h>

using namespace std;

#define Tushar  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


typedef long long int ll;

// MAIN FUNCTION

int main()
{
  Tushar;

  // SOLUTION
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        s.push_back('0');
        ll cnt = 0, ans = 0;
        vector <ll> v;
        for(ll i = 0; i < s.size(); i++){
            if(s[i] == '1')
                cnt++;
            else{
                //if(cnt){
                    v.push_back(cnt);
                    cnt = 0;
                //}
            }
        }
             /* if(cnt)
                v.push_back(cnt);  */
            //sort(v.rbegin(),v.rend());

            sort(v.begin(),v.end(),greater<ll>());
            for(ll i = 0; i < v.size(); i += 2){
                ans += v[i];
            }

        cout << ans << endl;
    }
  return 0;
}
