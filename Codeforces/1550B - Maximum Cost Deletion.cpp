#include <bits/stdc++.h>
using namespace std;
#define    ll      long long int  
void solve(){
	int n, a, b;
	cin >> n >> a >> b;
	string s;
	cin >> s;
	int ans = n*a;
	if(b < 0) {
		int cnt = 0;
		int z = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') {
				while(s[i] == '0' && i < n) {
					i++;
					z++;
				}
				cnt++;
			}
		}
		if(z != n)
			cnt++;

		int cnt2 = 0;
		z = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') {
				while(s[i] == '1' && i < n) {
					i++;
					z++;
				}
				cnt2++;
			}
		}
		if(z != n)
			cnt2++;
		int x = min(cnt, cnt2);
		ans += b*x;
	}
	else {
		ans += b*n;
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}
