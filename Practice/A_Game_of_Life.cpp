#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, temp;
    cin >> s;
    temp = s;
    while (m--)
    {
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '0')
            {
                if (i == 0)
                {
                    if (s[i + 1] == '1')
                        temp[i] = '1';
                }
                else if (i == n - 1)
                {
                    if (s[i - 1] == '1')
                        temp[i] = '1';
                }
                else if (s[i - 1] != s[i + 1])
                    temp[i] = '1';
            }
        }
        if(s==temp)
            break;
        s = temp;
    }
    cout << temp << endl;
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