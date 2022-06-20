#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int x, y;
		int mx = INT_MIN;
		int arr[n+1][m+1];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
				if(arr[i][j] > mx)
				{
					mx = arr[i][j];
					x = i + 1;
					y = j + 1;
				}
			}
		}
		int w = max(y,m-y+1);
		int h = max(x,n-x+1);
		//cout << h << " " << w << endl;
		cout << h*w << endl;
	}

	return 0;

}
