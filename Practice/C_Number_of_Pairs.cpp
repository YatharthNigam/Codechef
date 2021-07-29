#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
        m[arr[i]] = i;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = l; j <= r; j++)
        {
            int rem = j - arr[i];
            auto itr = m.find(rem);
            if (itr != m.end() && itr->second > i)
            {
                ans++;
            }
        }
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
