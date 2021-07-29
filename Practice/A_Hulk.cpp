#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s = "I hate";
    if (n == 1)
    {
        cout << s + " it" << endl;
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += " that I love";
        }
        else
        {
            s += " that I hate";
        }
    }
    cout << s + " it" << endl;
}

int32_t main()
{
    solve();
    return 0;
}