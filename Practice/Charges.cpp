#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            ans += 2;
        else
            ans++;
    }
    while (k--)
    {
        int pos;
        cin >> pos;
        pos -= 1;
        if (pos == 0)
        {
            if (pos + 1 < n)
            {
                if (s[pos] == s[pos + 1])
                    ans--;
                else
                    ans++;
                s[pos] = s[pos] == '1' ? '0' : '1';
            }
        }
        else if (pos == n - 1)
        {
            if (pos - 1 >= 0)
            {
                if (s[pos] == s[pos - 1])
                    ans--;
                else
                    ans++;
                s[pos] = s[pos] == '1' ? '0' : '1';
            }
        }
        else
        {
            if (s[pos] == s[pos - 1] && s[pos] == s[pos + 1])
                ans -= 2;
            else if (s[pos] != s[pos - 1] && s[pos] != s[pos + 1])
                ans += 2;
            s[pos] = s[pos] == '1' ? '0' : '1';
        }
        cout << ans << endl;
    }
    return;
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