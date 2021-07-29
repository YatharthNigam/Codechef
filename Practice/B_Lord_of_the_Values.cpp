#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << 3 * n << endl;
    for (int i = 0; i < n; i += 2)
    {
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
        cout << 1 << " " << i + 1 << " " << i + 2 << endl;
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
        cout << 1 << " " << i + 1 << " " << i + 2 << endl;
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
    }
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