#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ans[n];
    ans[0]=0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i-1]^arr[i];
        temp = temp & arr[i-1];
        arr[i]=temp^arr[i];
        ans[i]=temp;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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