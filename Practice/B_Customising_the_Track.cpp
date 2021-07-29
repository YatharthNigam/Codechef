#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int rem = sum % n;
    int min_con = rem * abs(n - rem % n);
    cout << min_con << endl;
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