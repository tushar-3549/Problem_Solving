#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n+1];
		set <int> st;
		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			st.insert(arr[i]);
		}
		int fst = 1, lst = n;
		for(int i = 1; i <= n; i++)
		{
			if(arr[i] != 0)
			{
				fst = i;
				break;
			}
		}
		for(int i = n; i >= 1; i--)
		{
			if(arr[i] != 0)
			{
				lst = i;
				break;
			}
		}
		int f = 0;
		for(int i = fst; i <= lst; i++)
		{
			if(arr[i] == 0)
			{
				f = 1;
				break;
			}
		}
		if(st.size() == 1 and arr[1] == 0)
			cout << 0 << endl;
		else if(f == 1) // (f)
			cout << 2 << endl;
		else 
			cout << 1 << endl;
	}
	return 0;
}
