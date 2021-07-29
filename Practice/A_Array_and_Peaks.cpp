#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, max_peaks;
    cin >> n >> k;
    if (n % 2 == 0)
        max_peaks = n / 2 - 1;
    else
        max_peaks = n / 2;
    if (max_peaks < k)
    {
        cout << -1 << endl;
        return;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    for (int i = 2; i < n; i++)
    {
        if (k == 0)
            break;
        if (i % 2 == 0)
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            k -= 1;
        }
    }
    for (auto i : arr)
        cout << i << ' ';
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