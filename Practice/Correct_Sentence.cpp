#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        if (s[i][0] >= 'a' && s[i][0] <= 'm')
        {
            for (auto j : s[i])
            {
                if (j >= 'a' && j <= 'm')
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        else if (s[i][0] >= 'N' && s[i][0] <= 'Z')
        {
            for (auto j : s[i])
            {
                if (j >= 'N' && j <= 'Z')
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            flag = false;
        }
        if (!flag)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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