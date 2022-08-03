#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n+1];
	// for(int i = 0; i < n; i++)
	// 	cin >> arr[i];
	int a1 = 0, a2 = 0, a3 = 0,a4 = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if(x == 1)
			a1++;
		else if(x == 2)
			a2++;
		else if(x == 3)
			a3++;
		else if(x == 4)
			a4++;
	}
	int sum = a4;
	if(a3 < a1)
	{
		sum += a3;
		a1 = a1 - a3;
		a3 = 0;
	}
	else if(a1 <= a3)
	{
		sum += a1;
		a3 = a3 - a1;
		a1 = 0;
	}
	if(a3 > 0)
	{
		sum += a3;
		a3 = 0;
	}
	if(a2 > 0)
	{
		sum += a2/2;
		a2 = a2 % 2;
	}
	int lf = a1 + (a2*2);
	if(lf <= 4 and lf > 0)
	{
		sum += 1;
	}
	else if(lf % 4 != 0)
	{
		sum += (lf / 4) + 1;
	}
	else 
	{
		sum += (lf / 4);
	}

	cout << sum << endl;

}
