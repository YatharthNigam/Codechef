#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int xa, xb, ya, yb, fa, fb, ans = 0;
    cin >> xa >> xb;
    cin >> ya >> yb;
    cin >> fa >> fb;
    if (xa == ya && ya == fa && fb > min(xb, yb) && fb < max(xb, yb))
    {
        ans = abs(xb - yb);
        ans += 2;
    }
    else if (xb == yb && yb == fb && fa > min(xa, ya) && fa < max(xa, ya))
    {
        ans = abs(xa - ya) + 2;
    }
    else
        ans = abs(xa - ya) + abs(xb - yb);
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