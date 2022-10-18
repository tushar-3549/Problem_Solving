
// https://codeforces.com/problemset/problem/1736/B
#include <bits/stdc++.h>
#define       ll          long long int 
#define       endl        "\n"
#define       pb          push_back
#define       all(x)      (x).begin(),(x).end()
#define       ff          first
#define       ss          second 
#define       print(x)    cout << (#x) << " = " << x << endl;
using namespace std;

int lcm(int a, int b)
{
	int g = __gcd(a, b);

	return (a*b)/g;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a + b == c || b + c == a || c + a == b)
			cout << "YES\n";
		else 
			cout << "NO\n";
	}



	return 0;

}
