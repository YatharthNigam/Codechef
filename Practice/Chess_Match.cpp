#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = 2 * (180 + a);
        ll temp = b + c;
        ans = ans - temp;
        cout << ans << endl;
    }
    return 0;
}