#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, flag = 0, c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        flag += arr[i];
    }
    if (flag % n == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > flag / n)
                c += 1;
        }
        cout << c << endl;
    }
    else
        cout << -1 << endl;
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
