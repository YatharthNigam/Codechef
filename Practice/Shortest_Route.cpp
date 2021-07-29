#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int x = INT_MAX;
    vector<int> ans(n, 0);
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans[i] = 0;
        else if (a[i] != 0)
            ans[i] = 0;
        else
            ans[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            r = i;
        if (r != -1)
            if (a[i] == 0)
                ans[i] = min(ans[i], i - r);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 2)
            l = i;
        if (l != -1)
            if (a[i] == 0)
                ans[i] = min(ans[i], l - i);
    }

    for (int i = 0; i < m; i++)
    {
        int temp = b[i] - 1;
        if (ans[temp] != x)
            cout << ans[temp] << " ";
        else
            cout << -1 << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}