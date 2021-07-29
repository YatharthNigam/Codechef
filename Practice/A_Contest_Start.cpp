#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q, t;
    cin >> n >> q >> t;
    int cap = (t / q) > n ? n - 1 : (t / q) - 1;
    int ans = (cap * (cap + 1)) / 2;
    ans += (cap + 1) * (n - 1 - cap);
    cout << ans << endl;
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