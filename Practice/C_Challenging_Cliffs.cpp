// //
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     int startDifference = arr[1] - arr[0];
//     int endDifference = arr[n - 1] - arr[n - 2];
//     int diff = min(startDifference, endDifference);
//     int flag = -1;
//     for (int i = 1; i < n - 1; i++)
//     {
//         if (arr[i + 1] - arr[i] < diff)
//         {
//             diff = arr[i + 1] - arr[i];
//             flag = i;
//         }
//     }
//     vector<int> res;
//     if (flag == -1)
//     {
//         if (startDifference < endDifference)
//         {
//             res.push_back(arr[0]);
//             for (int i = 2; i < n; i++)
//             {
//                 res.push_back(arr[i]);
//             }
//             res.push_back(arr[1]);
//         }
//         else
//         {
//             res.push_back(arr[n - 2]);
//             for (int i = 0; i < n; i++)
//             {
//                 if (i != n - 2)
//                 {
//                     res.push_back(arr[i]);
//                 }
//             }
//         }
//     }
//     else
//     {
//         res.push_back(arr[flag]);
//         for (int i = flag + 2; i < n; i++)
//         {
//             res.push_back(arr[i]);
//         }
//         for (int i = 0; i < flag; i++)
//         {
//             res.push_back(arr[i]);
//         }
//         res.push_back(arr[flag + 1]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << res[i] << " ";
//     }
//     cout << endl;
// }

// int32_t main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, minDiff = INT_MAX, x, y;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] < minDiff)
        {
            minDiff = arr[i + 1] - arr[i];
            x = i;
            y = i + 1;
        }
    }
    cout << arr[x] << ' ';
    for (int i = y + 1; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < x; i++)
        cout << arr[i] << ' ';
    cout << arr[y] << endl;
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