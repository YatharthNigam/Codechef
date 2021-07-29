#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int res = 0, x;
    bool flag = false;
    for (auto i : arr)
    {
        if (i == min)
            continue;
        x = i % (i - min);
        if (x == min)
            res++;
        else
        {
            min = 0;
            flag = true;
            res = 0;
            break;
        }
    }
    if (flag)
    {
        for (auto i : arr)
        {
            if (i != 0)
                res++;
        }
    }
    cout << res << endl;
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
