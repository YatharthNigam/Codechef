#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isbad(int four[4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            for (int k = j + 1; k < 4; k++)
            {
                if (four[i] <= four[j] && four[j] <= four[k])
                    return false;
                if (four[i] >= four[j] && four[j] >= four[k])
                    return false;
            }
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = n + n - 1;
    for (int i = 0; i <= n - 3; i++)
    {
        if (arr[i] <= arr[i + 1] && arr[i + 1] <= arr[i + 2])
            continue;
        else if (arr[i] >= arr[i + 1] && arr[i + 1] >= arr[i + 2])
            continue;
        ans++;
    }
    for (int i = 0; i <= n - 4; i++)
    {
        int four[4];
        for (int j = 0; j < 4; j++)
        {
            four[j] = arr[i + j];
        }
        if (isbad(four))
            ans++;
    }
    cout << ans << endl;
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