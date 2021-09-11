#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int zero = 0, one = 0;
    for (auto i : s)
    {
        if (i == '0')
            zero++;
        else
            one++;
    }
    cout << (zero * a) + (one * b) << endl;
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