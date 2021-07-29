#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << 0 << " " << 0 << endl;
    else if (a > b)
        cout << a - b << " " << min(a % (a - b), (a - b) - a % (a - b)) << endl;
    else
        cout << b - a << " " << min(b % (b - a), (b - a) - (b % (b - a))) << endl;
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