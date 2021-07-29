#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 2; i <= n + 1; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
            else
                cout << i - 2 << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        for (int i = 2; i <= n - 2; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
            else
                cout << i - 2 << " ";
        }
        cout << n << " " << n - 2 << " " << n - 1 << " " << endl;
        return;
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