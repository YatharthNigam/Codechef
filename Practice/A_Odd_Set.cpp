#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int eve = 0, odd = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0)
            eve++;
        else
            odd++;
    }
    if (eve == odd)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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