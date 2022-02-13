#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < 2 * n + 1 && k; i++)
    {
        if (arr[i] - 1 > arr[i - 1] && arr[i] - 1 > arr[i + 1])
        {
            arr[i]--;
            k--;
        }
    }
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}