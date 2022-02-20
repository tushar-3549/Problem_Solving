#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, x;
    cin >> n >> x;
    int arr[n+1];
    int cnt = 0, sum = 0;
    int b = 0;
    for(int i = 0;i < n;i++)
    {
      cin >> arr[i];
    }
    sort(arr,arr+n,greater<>());
    for(int i = 0;i < n;i++)
    {
      sum += arr[i];
      cnt ++;
      if(sum >= x)
      {
        b = 1;
        break;
      }
    }
    if(b == 1)
    {
      cout << cnt << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }
  return 0;
} 
