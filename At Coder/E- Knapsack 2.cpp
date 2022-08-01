// https://atcoder.jp/contests/dp/tasks/dp_e

#include <bits/stdc++.h>
#define   ll     long long int  
using namespace std;
const int N = 2e5+10;
ll wt[105], val[105];
ll dp[105][100005];
ll solve(int ind, int val_left)
{
	if(val_left == 0)
		return 0;
	if(ind < 0)
		return 1e15;
	if(dp[ind][val_left] != -1)
		return dp[ind][val_left];
	ll ans = solve(ind - 1, val_left);

	if(val_left - val[ind] >= 0)
		ans = min(ans, solve(ind - 1, val_left - val[ind]) + wt[ind]);

	return dp[ind][val_left] = ans;
}

int main()
{
	memset(dp,-1,sizeof(dp));
	int n, w;
    cin >> n >> w;
    for(int i = 0; i < n; i++)
    {
    	cin >> wt[i] >> val[i];
    }
    int mx_val = 1e5;
    for(int i = mx_val; i >= 0; i--)
    {
    	if(solve(n - 1, i) <= w)
    	{
    		cout << i << endl;
    		break;
    	}
    }

    return 0;
}

// 3 8
// 3 30
// 4 50
// 5 60
