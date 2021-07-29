#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    int min_pos = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
            ans++;
        else
            min_pos = min(min_pos, arr[i]);
    }
    sort(arr, arr + n);
    int min_diff = INT_MAX - 1; //-1 kyuki agar sirf ek elemtent hua to min diff aur min pos equal ho jaenge
    for (int i = 1; i < ans; i++)
    {
        min_diff = min(min_diff, arr[i] - arr[i - 1]);
    }
    if (min_diff >= min_pos)
        return (ans + 1);
    else
        return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
