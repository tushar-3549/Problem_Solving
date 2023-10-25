#include <bits/stdc++.h>
using namespace std;

int main() {
  // std::cout << "Hello World!\n";
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<set<int>> arr;
		set <int> st;
		for(int i = 0; i < n; i++) {
			int k;
			cin >> k;
			set <int> tempst;
			while(k--) {
				int x;
				cin >> x;
				st.insert(x);
				tempst.insert(x);
			}
			arr.push_back(tempst);
		}
		int ans = 0;
		for(auto it: st) {
			set <int> fnl;
			for(auto i: arr) {
				if(i.count(it) == 0) {
				// for(auto i.find(it) == i.end()) {
					for(auto j: i) {
						fnl.insert(j);
					}
				}
			}
			ans = max(ans, (int)fnl.size());
			// ans = max(ans, static_cast<int>(fnl.size()));
		}
		cout << ans << endl;
	}
	return 0;
}
