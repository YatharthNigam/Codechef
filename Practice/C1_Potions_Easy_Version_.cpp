#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, count = 0, ans = 0;
    cin >> n;
    int arr[n];
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += arr[i];
        p.push(arr[i]);
        count++;
        while (ans < 0)
        {
            ans -= p.top();
            p.pop();
            count--;
        }
    }
    cout << count << endl;
}

int32_t main()
{
    solve();
}
