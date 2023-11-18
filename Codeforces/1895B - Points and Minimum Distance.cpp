#include <bits/stdc++.h>
using namespace std;

int main() {
  // std::cout << "Hello World!\n";
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<int,int>>pr;
		vector<int>arr(2*n);
		for(int i = 0; i < 2*n; i++)
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		for(int i = 0; i < n; i++) {
			pr.push_back(make_pair(arr[i], arr[2*n-1-i]));
		}
		int ans = 0;
		for(int i = 1; i < n; i++) {
			ans += abs(pr[i-1].first - pr[i].first);
			ans += abs(pr[i-1].second - pr[i].second);
		}
		cout << ans << endl;
		for(auto x: pr) {
			cout << x.first << " " << x.second << endl;
		}
	}
	return 0;
}
