#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,one=0,two=0;
    cin >> n;
    int a[n], b[n], diff[n];
    pair<int, int> p(0, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (i != 0)
        {
            a[i] = a[i] + a[i - 1];
            b[i] = b[i] + b[i - 1];
        }
        diff[i] = abs(a[i] - b[i]);
        if (diff[i] > 0)
            if(diff[i]>p.first)
                p.first = diff[i];
        else
        if(diff[i]>p.second)
            p.second = diff[i];
    }
    if (p.first > p.second)
        cout << "1 " << p.first << endl;
    else
        cout << "2 " << p.second << endl;
    return 0;
}