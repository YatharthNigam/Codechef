#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int r, max = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        if (r > max)
            max = r;
    }
    cout << max << endl;
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