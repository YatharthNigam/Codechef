#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    int a = max(arr[0], arr[1]), b = max(arr[2], arr[3]);
    sort(arr, arr + 4);
    if ((a == arr[3] && b == arr[2]) || (b == arr[3] && a == arr[2]))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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