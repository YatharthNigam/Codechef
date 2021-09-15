// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int filled(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//             count++;
//     }
//     return count;
// }

// // bool check(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] == 0)
// //             return false;
// //     }
// //     return true;
// // }

// void solve()
// {
//     int n, s;
//     cin >> n >> s;
//     int arr[n];
//     int temp[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//         temp[i] = arr[i];
//     }
//     if (s == 0)
//     {
//         cout << sum << endl;
//         return;
//     }
//     int i;
//     bool flag = false;
//     for (i = 0; i < s; i++)
//     {
//         sum = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] > 0 and j == n - 1)
//             {
//                 temp[0] += 1;
//                 temp[j - 1] += 1;
//             }
//             else if (arr[j] > 0 and j == 0)
//             {
//                 temp[n - 1] += 1;
//                 temp[j + 1] += 1;
//             }
//             else if (arr[j] > 0)
//             {
//                 temp[j - 1] += 1;
//                 temp[j + 1] += 1;
//             }
//         }
//         for (int j = 0; j < n; j++)
//         {
//             // cout<<temp[j]<<" ";
//             sum += temp[j];
//             arr[j] = temp[j];
//         }
//         if (filled(arr, n) == n)
//         {
//             flag = true;
//             break;
//         }
//     }
//     if (flag)
//     {
//         sum += ((s - (i + 1)) * (n * 2));
//     }
//     // sum += ((s - (i + 1)) * n);
//     cout << sum << endl;
// }

// int32_t main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// //#include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <stack>
// #include <set>
// #include <map>
// #include <queue>
// #include <unordered_set>
// #include <unordered_map>
// //#include <ext/pb_ds/assoc_container.hpp>
// //#include <boost/multiprecision/cpp_int.hpp>
// using namespace std;
// //using namespace __gnu_pbds;
// //using namespace boost::multiprecision;
// #define int long long
// #define flash                         \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// #define MP make_pair
// #define PB push_back
// #define FF first
// #define SS second
// #define MOD 1000000007
// #define test  \
//     int t;    \
//     cin >> t; \
//     while (t--)
// #define REP(i, a, b) for (int i = a; i < b; i++)
// #define all(a) (a).begin(), (a).end()
// //typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// typedef vector<int> VI;
// typedef vector<vector<int>> VVI;
// typedef pair<int, int> PII;
// typedef vector<PII> VPII;
// typedef set<int> SI;
// typedef map<string, int> MSI;
// typedef map<int, int> MII;
// typedef pair<int, PII> PIII;
// //usefull functions:
// int poww(int n, int r)
// {
//     int res = 1;
//     while (r)
//     {
//         if (r & 1)
//             res = (res * n);
//         n = (n * n);
//         r = r >> 1;
//     }
//     return res;
// }
// int gcd(int a, int b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }
// int binPow(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     if (b == 1)
//         return a;
//     int ret = binPow(a, b / 2);
//     if (b % 2 == 0)
//         return (ret * ret) % MOD;
//     return ((ret * ret) % MOD * a) % MOD;
// }
// VI fact(200005);
// int inv(int a)
// {
//     return (binPow(a, MOD - 2) % MOD + MOD) % MOD;
// }
// int binom(int a, int b)
// {
//     if (b < 0 or a < 0)
//         return 0;
//     return (((fact[a] * inv(fact[b])) % MOD * inv(fact[a - b])) % MOD + MOD) % MOD;
// }

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     unordered_set<int> d;
//     VI nums(n);
//     REP(i, 0, n)
//     {
//         cin >> nums[i];
//         if (nums[i])
//         {
//             d.insert(i);
//         }
//     }
//     VI ans = nums;
//     REP(i, 0, n)
//     {
//         if (d.count(i))
//         {
//             continue;
//         }
//         if (i == 0)
//         {
//             if (d.count(n - 1))
//             {
//                 ans[i] = 1;
//             }
//             continue;
//         }
//         if (ans[i - 1])
//         {
//             if (d.count(i - 1))
//             {
//                 ans[i] = 1;
//             }
//             else
//             {
//                 ans[i] = ans[i - 1] + 1;
//             }
//         }
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (d.count(i))
//         {
//             continue;
//         }
//         if (i == n - 1)
//         {
//             if (d.count(0))
//             {
//                 ans[i] = 1;
//             }
//             else
//             {
//                 if (ans[0])
//                 {
//                     ans[i] = min(ans[i], ans[0] + 1);
//                 }
//             }
//             continue;
//         }
//         if (d.count(i + 1))
//         {
//             ans[i] = 1;
//         }
//         else
//         {
//             if (ans[i + 1])
//             {
//                 if (ans[i] == 0)
//                     ans[i] = ans[i + 1] + 1;
//                 else
//                     ans[i] = min(ans[i], ans[i + 1] + 1);
//             }
//         }
//     }
//     int c = 0;
//     REP(i, 0, n)
//     {

//         if (d.count(i))
//         {
//             c += ans[i];
//             ans[i] = 0;
//         }
//     }
//     if (k == 0)
//     {
//         cout << c << endl;
//         return;
//     }
//     REP(i, 0, n)
//     {
//         if (ans[i] > k)
//         {
//             continue;
//         }
//         int q, q1;
//         if (i == 0)
//         {
//             q = max(ans[1], ans[n - 1]);
//             q1 = min(ans[1], ans[n - 1]);
//         }
//         else if (i == n - 1)
//         {
//             q = max(ans[i - 1], ans[0]);
//             q1 = min(ans[i - 1], ans[0]);
//         }
//         else
//         {
//             q = max(ans[i - 1], ans[i + 1]);
//             q1 = min(ans[i - 1], ans[i + 1]);
//         }
//         // cout<<ans[i]<<" "<<q<<" "<<q1<<endl;
//         int cr = 0;
//         if (q && q1 < k)
//             cr = min(k, q) - min(k, q1);
//         if (k > q)
//         {
//             cr += (k - q) * 2;
//         }
//         c += cr;
//     }
//     // REP(i,0,n){
//     //     cout<<ans[i]<<" ";
//     // }
//     cout << c << endl;
// }

// int32_t main()
// {
//     flash;
//     test
//     {
//         solve();
//     }
//     //solve();
//     return 0;
// }

//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <unordered_set>
#include <unordered_map>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
//using namespace __gnu_pbds;
//using namespace boost::multiprecision;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MP make_pair
#define PB push_back
#define FF first
#define SS second
#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef set<int> SI;
typedef map<string, int> MSI;
typedef map<int, int> MII;
typedef pair<int, PII> PIII;
//usefull functions:
int poww(int n, int r)
{
    int res = 1;
    while (r)
    {
        if (r & 1)
            res = (res * n);
        n = (n * n);
        r = r >> 1;
    }
    return res;
}
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int binPow(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int ret = binPow(a, b / 2);
    if (b % 2 == 0)
        return (ret * ret) % MOD;
    return ((ret * ret) % MOD * a) % MOD;
}
VI fact(200005);
int inv(int a)
{
    return (binPow(a, MOD - 2) % MOD + MOD) % MOD;
}
int binom(int a, int b)
{
    if (b < 0 or a < 0)
        return 0;
    return (((fact[a] * inv(fact[b])) % MOD * inv(fact[a - b])) % MOD + MOD) % MOD;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    unordered_set<int> d;
    VI nums(n);
    int c0 = 0;
    REP(i, 0, n)
    {
        cin >> nums[i];
        if (nums[i])
        {
            d.insert(i);
        }
        if (nums[i] == 0)
        {
            c0 += 1;
        }
    }
    if (c0 == n)
    {
        cout << 0 << endl;
        return;
    }
    VI ans = nums;
    REP(i, 0, n)
    {
        if (d.count(i))
        {
            continue;
        }
        if (i == 0)
        {
            if (d.count(n - 1))
            {
                ans[i] = 1;
            }
            continue;
        }
        if (ans[i - 1])
        {
            if (d.count(i - 1))
            {
                ans[i] = 1;
            }
            else
            {
                ans[i] = ans[i - 1] + 1;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (d.count(i))
        {
            continue;
        }
        if (i == n - 1)
        {
            if (d.count(0))
            {
                ans[i] = 1;
            }
            else
            {
                if (ans[0])
                {
                    ans[i] = min(ans[i], ans[0] + 1);
                }
            }
            continue;
        }
        if (d.count(i + 1))
        {
            ans[i] = 1;
        }
        else
        {
            if (ans[i + 1])
            {
                if (ans[i] == 0)
                    ans[i] = ans[i + 1] + 1;
                else
                    ans[i] = min(ans[i], ans[i + 1] + 1);
            }
        }
    }
    int c = 0;
    REP(i, 0, n)
    {

        if (d.count(i))
        {
            c += ans[i];
            ans[i] = 0;
        }
    }
    if (k == 0)
    {
        cout << c << endl;
        return;
    }
    REP(i, 0, n)
    {
        if (ans[i] > k)
        {
            continue;
        }
        int q, q1;
        if (i == 0)
        {
            q = max(ans[1], ans[n - 1]);
            q1 = min(ans[1], ans[n - 1]);
        }
        else if (i == n - 1)
        {
            q = max(ans[i - 1], ans[0]);
            q1 = min(ans[i - 1], ans[0]);
        }
        else
        {
            q = max(ans[i - 1], ans[i + 1]);
            q1 = min(ans[i - 1], ans[i + 1]);
        }
        // cout<<ans[i]<<" "<<q<<" "<<q1<<endl;
        int cr = 0;
        if (q && q1 < k)
            cr = min(k, q) - min(k, q1);
        if (k > q)
        {
            cr += (k - q) * 2;
        }
        c += cr;
    }
    // REP(i,0,n){
    //     cout<<ans[i]<<" ";
    // }
    cout << c << endl;
}

int32_t main()
{
    flash;
    test
    {
        solve();
    }
    //solve();
    return 0;
}