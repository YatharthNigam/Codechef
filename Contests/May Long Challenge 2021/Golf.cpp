#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        if ((n + 1) % k == x % k || x % k == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}