#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        int count = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            count++;
        }
        if (n > 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            if (count % 2 == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
