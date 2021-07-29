#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>

int far(int node, vvi &G, int n)
{
    vector<bool> done(n + 1, false);
    int f = -1, far;
    done[node] = true;
    queue<pair<int, int>> queue;
    queue.push({node, 0});
    while (queue.size())
    {
        auto it = queue.front();
        queue.pop();
        int nod = it.first, d = it.second;
        if (f < d)
            f = d, far = nod;
        for (auto cnod : G[nod])
        {
            if (done[cnod])
                continue;
            done[cnod] = true;
            queue.push({cnod, d + 1});
        }
    }
    return far;
}

void dfs(int nod, int par, vvi &G, vi &H, vi &li, int cur)
{
    bool leaf = true;
    int mx = 0;
    for (auto cnod : G[nod])
        if (cnod != par)
        {
            leaf = false;
            mx = max(mx, H[cnod]);
        }
    if (leaf)
    {
        li.push_back(cur);
        return;
    }

    int c = 0;
    for (auto cnod : G[nod])
    {
        if (cnod == par)
            continue;
        if (H[cnod] == mx && c == 0)
        {
            dfs(cnod, nod, G, H, li, cur + 1);
            c++;
        }
        else
            dfs(cnod, nod, G, H, li, 1);
    }
}

void height(int nod, int par, vvi &G, vi &H)
{
    bool leaf = true;
    for (auto cnod : G[nod])
    {
        if (cnod == par)
            continue;
        leaf = false;
        height(cnod, nod, G, H);
        H[nod] = max(H[nod], 1 + H[cnod]);
    }
    if (leaf)
        H[nod] = 1;
}

void lines(int nod, int par, vvi &G, vi &li, int n)
{
    vector<int> H(n + 1, 0);
    height(nod, par, G, H);
    dfs(nod, par, G, H, li, 1);
}

int answer(vvi &g, int n, int k)
{
    if (k == 1)
        return 1;
    int u = far(1, g, n);
    vector<int> li;
    lines(u, 0, g, li, n);
    sort(li.rbegin(), li.rend());
    int size = 1, total = 0, i = 0;
    while (total < k)
    {
        size++;
        total += li[i++];
    }
    return size;
}

void solve()
{
    int n, k;
    int x, y;

    cin >> n >> k;
    vvi g(n + 1);
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout << answer(g, n, k) << "\n";
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