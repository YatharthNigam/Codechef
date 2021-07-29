// #include <bits/stdc++.h>
// using namespace std;

// long long int power(long long int x, int y, int p)
// {
//     long long int res = 1;
//     x = x % p;
//     if (x == 0)
//         return 0;
//     while (y > 0)
//     {
//         if ((y & 1) != 0)
//             res = (res * x) % p;
//         y = y >> 1;
//         x = (x * x) % p;
//     }
//     return res;
// }

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int mod = 1000000007;
//         long long int ans = power(2, n - 1, mod);
//         cout << ans << endl;
//         ;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void pre(vector<ll> ans)
{
    ll max = 1e5 + 5;
    ll mod = 1e9 + 7;
    ans[1] = 1;
    for (ll i = 2; i < max; i++)
    {
        ans[i] = (ans[i - 1] * 2) % mod;
    }
}

int main()
{
    vector<ll> ans;
    pre(ans);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}