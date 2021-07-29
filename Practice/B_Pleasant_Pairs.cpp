#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = arr[i] - i; j <= n; j += arr[i])
        {
            if (j > 0)
            {
                if (arr[i] * arr[j] == i + j && i < j)
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