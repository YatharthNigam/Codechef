#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    vector<int> bits(32);
    for (int i = 0; i < 32; i++)
    {
        bits[i] = 0;
        for (int &j : arr)
        {
            if (j % 2 != 0)
            {
                bits[i]++;
            }
            j /= 2;
        }
    }
    int ans = 0;
    int count = 1;
    for (int i = 0; i < 32; i++)
    {
        if (bits[i] >= n - bits[i])
            ans += count;
        count *= 2;
    }
    int a = 0;
    for (int j = 0; j < n; j++)
    {
        a |= (temp[j] ^ ans);
    }
    cout << ans << ' ' << a << endl;
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
