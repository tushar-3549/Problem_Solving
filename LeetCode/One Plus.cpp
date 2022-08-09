// https://leetcode.com/problems/plus-one/

#include <bits/stdc++.h>
using namespace std;


// Leetcode solution ..............................
vector<int> plusOne(vector<int>& digits)
{
	int n = digits.size();
	int i = n - 1;
	while(digits[i] == 9 && i > 0)
	{
		digits[i] = 0;
		i--;
	}
	if(digits[i] == 9 && i == 0)
	{
		digits[i] = 0;
		digits.push_back(1);
		reverse(digits.begin(),digits.end());
	}
	else
	{
		digits[i]++;
	}
	return digits;
}

// End .........................................


int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	vector <int> ans = plusOne(v);
	// for(auto &a:ans)
	// {
	// 	cout << a << " ";
	// }
	// cout << endl;
	for(int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;


}
