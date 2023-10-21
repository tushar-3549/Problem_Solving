#include <bits/stdc++.h> 
using namespace std;

#define all(arr) arr.begin(), arr.end()
const int MAXN = 1010;
string A[MAXN];

int main() {
  int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> A[i];
		int ans = 0;
		for(int i = 0; i < n/2; i++) {
			for(int j = 0; j < n/2; j++) {
				vector<char> M {A[i][j], A[n - 1 - j][i], A[n - 1 - i][n - 1 - j], A[j][n - 1 - i]};
				char c = *max_element(all(M));
				for(char e: M)
					ans += c - e;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
