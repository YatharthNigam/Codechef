#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, ans = 0;
    cin >> n;
    int arr[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i] - (i + 1)]++;
    }
    for (auto i : m)
    {
        ans += ((i.second * (i.second - 1)) / 2);
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
