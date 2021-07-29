#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 1;
        cin >> n;
        while (true)
        {
            if (res * 2 > n)
            {
                cout << res-1 << endl;
                break;
            }
            res *= 2;
        }
    }
    return 0;
}