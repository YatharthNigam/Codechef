#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum == n)
        cout << 0 << endl;
    else if (sum > n)
        cout << sum - n << endl;
    else if (sum < n)
        cout << 1 << endl;
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
