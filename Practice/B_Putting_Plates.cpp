#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            arr[i][j] = 0;
    }
    for (int i = 0; i < m; i += 2)
        arr[0][i] = 1;
    for (int i = 0; i < m; i += 2)
        arr[n - 1][i] = 1;
    for (int i = 1; i < n - 1; i++)
        if (arr[i - 1][0] == 0 and arr[i - 1][1] == 0 and arr[i][1] == 0 and arr[i + 1][1] == 0 and arr[i + 1][0] == 0)
            arr[i][0] = 1;
    for (int i = 1; i < n - 1; i++)
        if (arr[i - 1][m - 1] == 0 and arr[i - 1][m - 2] == 0 and arr[i][m - 2] == 0 and arr[i + 1][m - 2] == 0 and arr[i + 1][m - 1] == 0)
            arr[i][m - 1] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j];
        cout << endl;
    }
    cout << endl;
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