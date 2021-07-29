#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0, flag = 0;
    cin >> n;
    int a[n], b[n];
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        if ((b[i] - a[i]) > 0)
        {
            pos.insert(pos.end(), b[i] - a[i], i + 1);
            flag += b[i] - a[i];
        }
        else if ((b[i] - a[i]) < 0)
            neg.insert(neg.end(), a[i] - b[i], i + 1);
        sum += (b[i] - a[i]);
    }
    if (sum != 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << flag << endl;
    while (flag--)
    {
        cout << neg[flag] << ' ' << pos[flag] << endl;
    }
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
