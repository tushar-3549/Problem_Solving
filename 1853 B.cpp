#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		// if(k > 30){
  //           cout << 0 << endl;
  //           continue;
  //       }
		int ans = 0;
		for(int i = 0;i <= n; i++){
			int sec = n;
			int fir = i;
			bool ok = true;
			for(int j = 1; j <= k-2; j++){
				int temp = sec-fir;
				sec = fir;
				fir = temp;
				if(fir <= sec && fir > -1){
					continue;
				}
				else{
					ok = false;
					break;
				}
			}
			if(ok){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
