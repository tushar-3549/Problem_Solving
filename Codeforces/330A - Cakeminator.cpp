#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, c;
	cin >> r >> c;
	char arr[r+1][c+1];
	memset(arr,0,sizeof(arr));
	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j <= c; j++)
		{
			cin >> arr[i][j];
		}
	}
	int ans = 0;
	for(int i = 1; i <= r; i++)
	{
		bool ok = true;
		for(int j = 1; j <= c; j++)
		{
			if(arr[i][j] == 'S')
			{
				ok = false;
				break;
			}
		}
		if(ok)
		{
			for(int j = 1; j <= c; j++)
			{
				if(arr[i][j] == '.')
				{
					ans++;
					arr[i][j] = 'x';
				}
			}
		}
	}
	for(int j = 1; j <= c; j++)
	{
		bool ok = true;
		for(int i = 1; i <= r; i++)
		{
			if(arr[i][j] == 'S')
			{
				ok = false;
				break;
			}
		}
		if(ok)
		{
			for(int i = 1; i <= r; i++)
			{
				if(arr[i][j] == '.')
				{
					ans++;
					arr[i][j] = 'x';
				}
			}
		}
	}
	cout << ans << endl;

	return 0;
}
