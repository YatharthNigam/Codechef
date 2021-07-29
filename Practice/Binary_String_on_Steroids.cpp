#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int total_0 = 0, total_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            total_1++;
        }
        else
        {
            total_0++;
        }
    }
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                factors.push_back(i);
            }
            else
            {
                factors.push_back(n / i);
                factors.push_back(i);
            }
        }
    }
    int ans = INT_MAX;
    for (auto fact : factors)
    {
        vector<int> freq(fact);
        for (int i = 0; i < fact; i++)
        {
            for (int j = i; j < n; j += fact)
            {
                if (s[j] == '1')
                {
                    freq[i]++;
                }
            }
        }
        int req = n / fact;
        for (int i = 0; i < fact; i++)
        {
            int to_convert = req - freq[i];
            to_convert += (total_1 - freq[i]);
            ans = min(ans, to_convert);
        }
    }
    cout << ans << endl;
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