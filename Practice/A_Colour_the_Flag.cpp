#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n][m], r[n][m], w[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    char ch;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
                ch = 'R';
            else
                ch = 'W';
            for (int j = 0; j < m; j++)
            {
                r[i][j] = ch;
                ch = ch == 'W' ? 'R' : 'W';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
                ch = 'W';
            else
                ch = 'R';
            for (int j = 0; j < m; j++)
            {
                w[i][j] = ch;
                ch = ch == 'W' ? 'R' : 'W';
            }
        }
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '.' && a[i][j] != r[i][j])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << r[i][j];
            }
            cout << endl;
        }
        return;
    }
    flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '.' && a[i][j] != w[i][j])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << w[i][j];
            }
            cout << endl;
        }
        return;
    }
    cout << "NO" << endl;
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
