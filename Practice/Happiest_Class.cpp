#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    int can[n * k];
    for (int i = 0; i < n * k; i++)
    {
        cin >> can[i];
    }
    map<int, int> map;
    for (int i = 0; i < n * k; i++)
    {
        map[can[i]]++;
    }
    int st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
    }
    int h[k];
    for (int i = 0; i < k; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (map[st[i]] > k)
        {
            ans += h[k - 1];
            map[st[i]] -= k;
        }
        else
        {
            ans += h[map[st[i]] - 1];
            map[st[i]] = 0;
        }
    }
    cout << ans << endl;
    return 0;
}