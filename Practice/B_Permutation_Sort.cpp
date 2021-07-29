#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != i + 1)
                flag++;
        }
        if (flag)
        {
            if (arr[0] == '1' || arr[n - 1] == n)
            {
                cout << '1' << endl;
            }
            else if (arr[0] == n && arr[n - 1] == 1)
            {
                cout << '3' << endl;
            }
            else
                cout << '2' << endl;
        }
        else
        {
            cout << '0' << endl;
        }
    }

    return 0;
}