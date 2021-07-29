#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        int avg = (a[0] + a[i]) / 2;
        if (a[i] > avg)
            ans++;
    }
    cout << ans << endl;
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