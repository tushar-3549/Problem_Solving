#include <iostream>
    /*#include <iostream>
    #include <vector>
    #include <string>
    #include <set>
    #include <map>
    #include <algorithm>
    #include <utility>
    #include <cmath>
    #include <iomanip>
    #include <stack>
    #include <deque>
    #include <queue>
    #include <cstdio>
    #include <unordered_map>
    #include <unordered_set>
    #include <numeric>
    #include <cassert>
    #include <ext/rope>
    #include <random>
    #include <ctime>
    #include <chrono>
    #include <cassert>
    #include <stdio.h>
    #include <stdlib.h>
    #include <windows.h>
    #include <bitset> */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 1;
    int res = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        res += start;
        if (res % n != 0)
        {
            res = res % n;
        }
        else
        {
            res = n;
        }
        cout << res << " ";
        start++;
    }
}
