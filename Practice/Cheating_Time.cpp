#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, f, a, b;
    cin >> n >> k >> f;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i] = {a, b};
    }
    sort(v.begin(), v.end());
    int total = 0;
    int max_end = v[0].second;
    for (int i = 1; i < n; i++)
    {
        total += max(0, (v[i].first - max_end));
        max_end = max(max_end, v[i].second);
    }
    total += v[0].first;
    total += f - max_end;
    if (total >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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