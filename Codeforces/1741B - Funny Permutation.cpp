#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       print(x)    cout << (#x) << " = " << x << endl;
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
		memset(arr, 0, sizeof(arr));
		if(n == 1 or n == 3)
		{
			cout << -1 << endl;
			continue;
		}
		else if(n == 5)
		{
			cout << "5 4 1 2 3" << endl;
			continue;
		}
		else 
		{
			// if(n % 2 == 0)
			// {
				for(int i = 1; i <= n; i++)
					arr[i] = (n - i + 1);
			//}
			//else
			if(n % 2) 
			{
				for(int i = 1; i <= n; i++)
				{
					swap(arr[(n/2)], arr[(n/2) + 1]);
				}
			}
		}
		for(int i = 1; i <= n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}
