#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, x, count = 1;
    cin >> n >> k >> x;
    vector<int> v(n), pts;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > x)
        {
            count += 1;
            pts.push_back(((v[i] - v[i - 1]) - 1) / x);
        }
    }
    sort(pts.begin(), pts.end());
    for (int i = 0; i < pts.size(); i++)
    {
        if (k == 0)
            break;
        if (k >= pts[i])
        {
            k -= pts[i];
            count--;
        }
    }
    cout << count << endl;
}

int32_t main()
{
    solve();
    return 0;
}