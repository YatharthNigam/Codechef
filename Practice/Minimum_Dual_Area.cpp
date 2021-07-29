#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a, b;
        multiset<int> A;
        multiset<int> B;
        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
            b.push_back({y, x});
            A.insert(x);
            B.insert(y);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int h1 = 0;
        int h2 = 0;
        int h1Max = 0;
        int h1Min = LONG_MAX;
        int ans = LONG_MAX;
        for (int i = 0; i < n - 1; ++i)
        {

            h1Max = max(h1Max, a[i].second);
            h1Min = min(h1Min, a[i].second);
            h1 = h1Max - h1Min;
            auto it = B.find(a[i].second);
            B.erase(it);
            h2 = *B.rbegin() - *B.begin();
            int newans = (a[i].first - a[0].first) * h1 +
                         (a[n - 1].first - a[i + 1].first) * h2;
            ans = min(ans, newans);
        }
        int w1 = 0;
        int w2 = 0;
        int w1Max = 0;
        int w1Min = LONG_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            w1Max = max(w1Max, b[i].second);
            w1Min = min(w1Min, b[i].second);
            w1 = w1Max - w1Min;
            auto it = A.find(b[i].second);
            A.erase(it);
            w2 = *A.rbegin() - *A.begin();
            int newans = (b[i].first - b[0].first) * w1 +
                         (b[n - 1].first - b[i + 1].first) * w2;
            ans = min(ans, newans);
        }
        if (ans == LONG_MAX)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}