#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, small = INT_MAX, big = INT_MIN, s = INT_MAX, b = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < s)
        {
            small = i;
            s = arr[i];
        }
        if (arr[i] > b)
        {
            big = i;
            b = arr[i];
        }
    }
    small += 1;
    big += 1;
    int x = max(n - small, n - big) + 1;
    int y = min(big, small) + n - max(big, small) + 1;
    cout << min(max(big, small), min(x, y)) << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
