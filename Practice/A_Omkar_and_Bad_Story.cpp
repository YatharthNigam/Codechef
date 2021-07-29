#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, max = 0;
    bool neg = false, zero = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp < 0)
        {
            neg = true;
        }
        if (temp == 0)
            zero = true;
        if (temp > max)
        {
            max = temp;
        }
    }
    if (neg)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (zero)
    {
        cout << max + 1 << endl;
    }
    else
        cout << max << endl;
    for (int i = 1; i <= max; i++)
    {
        cout << i << " ";
    }
    if (zero)
        cout << 0;

    cout << endl;
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