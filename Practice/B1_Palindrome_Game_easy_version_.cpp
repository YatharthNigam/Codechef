#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s.at(i) == '0')
                flag++;
        }
        if (flag == 1)
        {
            cout << "BOB" << endl;
        }
        else if (flag % 2 == 0)
            cout << "BOB" << endl;
        else
            cout << "ALICE" << endl;
    }
    return 0;
}