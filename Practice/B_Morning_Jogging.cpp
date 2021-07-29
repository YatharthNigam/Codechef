#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> v;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
        sort(arr[i],arr[i]+m);
        for(int j = 0; j <m;j++)
            v.push_back(make_pair(arr[i][j],make_pair(i,j)));
    }
    sort(v.begin(),v.end());
    for(int k=(m-1);k>=0;k--)
    {
        int i=v[k].second.first;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}