#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2 * n];
        vector<int> even, odd, join;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even.push_back(arr[i]);
            else
                odd.push_back(arr[i]);
        }
        for (int i = 0; i < 2 * n; i++)
        {
            if (i < odd.size())
                join.push_back(odd[i]);
            else
                join.push_back(even[i-odd.size()]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << join[i] << ' ' << join[i+1] << ' ';
        }
        cout << endl;
    }
    return 0;
}