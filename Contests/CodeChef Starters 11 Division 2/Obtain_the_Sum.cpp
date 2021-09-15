#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, s;
    cin >> n >> s;
    int sum = ((n) * (n + 1)) / 2;
    // cout << "sum " << sum << endl;
    if ((sum - s) <= n and (sum - s) > 0)
        cout << sum - s << endl;
    else
        cout << -1 << endl;
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