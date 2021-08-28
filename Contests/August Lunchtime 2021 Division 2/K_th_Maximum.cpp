#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t, n, k, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        k--;
        int arr[n];
        int maxim = INT_MIN;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxim = max(maxim, arr[i]);
        }
        int count = 0;
        for (i = 0; i < n; i++)
        {
            int temp = i + k;
            if (temp < n && arr[temp] == maxim)
            {
                count += (n - temp);
            }
        }
        cout << count << "\n";
    }
}