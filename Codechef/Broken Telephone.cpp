
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> messages(n);
        for (int i = 0; i < n; i++) {
            cin >> messages[i];
        }
        unordered_set<int> counter;
        for (int i = 0; i < n-1; i++) {
            if (messages[i] != messages[i+1]) {
                counter.insert(i);
                counter.insert(i+1);
            }
            
            
        }
       int distinctCount = counter.size();
        cout << distinctCount << endl;
        
    }

    return 0;
}
