#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
	if (s == "ABC" && n <= 1999) printf("YES\n");
	else if (s == "ARC" && n <= 2799) printf("YES\n");
	else if (s == "AGC" && n >= 1200) printf("YES\n");
	else printf("NO\n");
	
	return 0;

}
