#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if (b > 0)
    {
        int len = s.length();
        ans = len * (a + b);
        cout << ans << endl;
        return;
    }
    else
    {
        int count = 0, len = s.length();
        char prev = s[0], now = s[0];
        for (int i = 0; i < len; i++)
        {
            if (s[i] != prev and s[i] != now)
            {
                count++;
            }
            prev = s[i];
        }
        count += 1;
        ans = n * a + count * b;
        cout << ans << endl;
    }
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