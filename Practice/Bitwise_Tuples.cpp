#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

int power(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b % 2)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b = b / 2;
    }
    return res;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = power(2, n) - 1;
    ans = power(ans, m);
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