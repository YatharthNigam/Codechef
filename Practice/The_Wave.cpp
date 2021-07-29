#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums, nums + n);
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        int lower = lower_bound(nums, nums + n, temp) - nums;
        if (lower < n && nums[lower] == temp)
            cout << 0 << endl;
        else if (lower % 2 == 0)
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;
    }
}

int32_t main()
{
    solve();
}
