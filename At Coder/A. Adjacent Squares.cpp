#include <bits/stdc++.h>
using namespace std;
int main()
{
  int h, w, r, c;
  cin >> h >> w >> r >> c;
  cout << (r!=1)+(c!=1)+(r!=h)+(c!=w) << endl;
}
