#include <bits/stdc++.h>
using namespace std;
// #define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = s[i - 1] - 'a' + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << endl;
    }
}

int32_t main()
{
    solve();
}
