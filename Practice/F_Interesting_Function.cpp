#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int l, r, ans;
    cin >> l >> r;
    ans = r - l;
    int num = 10;
    while (r / num - l / num > 0)
    {
        ans += (r / num - l / num);
        num *= 10;
    }
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
