#include <bits/stdc++.h>
using namespace std;
 
void solveA()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a+b+c-min({a,b,c}) >= 10 ? "YES\n" : "NO\n");
}
void solveB()
{
	int n;
	cin >> n;
	int mx = 0, winner = 0;
	for(int i = 1; i <= n; i++){
		int a, b;
	    cin >> a >> b;
		if(a <= 10 && b > mx){
			mx = b;
			winner = i;
		}
	}
	cout << winner << endl;
	
}
void solveC()
{
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			char c;
			cin >> c;
			if(c != '.')
				cout << c;
		}
	}
	cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //solveA();
		//solveB();
		solveC();
    }
	return 0;
}
