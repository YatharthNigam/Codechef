#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> reordered;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            reordered.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            reordered.push_back(arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(reordered[i], 2 * reordered[j]) > 1)
                ans++;
        }
    }
    cout << ans << endl;
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