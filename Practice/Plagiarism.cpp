#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    map<int, int> map;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] <= n)
            map[arr[i]]++;
    }
    int flag = 0;
    for (auto i : map)
    {
        if (i.second >= 2)
        {
            flag++;
        }
    }
    cout << flag << " ";
    for (auto i : map)
    {
        if (i.second >= 2)
        {
            cout << i.first << " ";
        }
    }
    cout << endl;
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