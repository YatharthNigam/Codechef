#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool is_palindrome = 1;
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        zero += s[i] == '0';
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            is_palindrome = 0;
        if ((s[i] == '1' || s[n - 1 - i] == '1') && s[i] != s[n - 1 - i])
        {
            one++;
        }
    }
    if (is_palindrome)
    {
        if (zero == 1)
        {
            cout << "BOB\n";
            return;
        }
        if (zero % 2)
        {
            cout << "ALICE\n";
            return;
        }
        cout << "BOB\n";
        return;
    }
    if (zero == 2 && one == 1)
    {
        cout << "DRAW\n";
        return;
    }
    cout << "ALICE\n";
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