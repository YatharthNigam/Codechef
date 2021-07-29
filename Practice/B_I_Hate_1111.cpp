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
        int b = n % 11;
        int num = n - b * 111;
        if (num >= 0 && num % 11 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}