#include <bits/stdc++.h>
using namespace std;
#define  ll   long long int
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, q;
		cin >> n >> q;
		vector<int>arr(n);
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int x;
		vector<int>v;
		for(int i = 0; i < q; i++){
			cin >> x;
			if(v.empty() || v.back() > x)
			   v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			for(auto it: v){
				if(arr[i] % (1 << it) == 0){
					it = it-1;
					arr[i] += (1 << it);
				}
			}
		}
		for(auto ans: arr)
			cout << ans << " ";
		cout << endl;
	}
	return 0;
}
