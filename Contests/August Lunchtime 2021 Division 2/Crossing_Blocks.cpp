#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[0])
        {
            cout << -1 << endl;
            return;
        }
    }
    vector<int> now(n, -1);
    stack<int> s;
    s.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() and a[s.top()] < a[i])
        {
            now[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        now[s.top()] = -1;
        s.pop();
    }
    int idx = n - 1;
    int jumps = 0;
    if (now[n - 1] == -1)
    {
        cout << 1 << endl;
    }
    else
    {
        while (idx != 0)
        {
            jumps++;
            if (idx == -1)
            {
                jumps--;
                break;
            }
            idx = now[idx];
        }
        cout << jumps << endl;
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
