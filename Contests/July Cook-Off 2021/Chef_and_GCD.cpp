#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0 and b % 2 == 0)
    {
        cout << 0 << endl;
    }
    else if (__gcd(a, b) > 1)
        cout << 0 << endl;

    else if ((__gcd(a + 1, b) > 1) || (__gcd(a, b + 1) > 1))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
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
