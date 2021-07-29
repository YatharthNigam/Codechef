#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int one = 0, two = 0;
        while (k--)
        {
            one += arr.back();
            arr.pop_back();
            two += arr.back();
            arr.pop_back();
        }
        two += arr.back();
        cout << max(one, two) << endl;
    }
    return 0;
}
