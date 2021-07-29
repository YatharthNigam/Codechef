#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b; //n=a^x+y*b
    int s = 1;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        return;
    }
    while(s<=n)
    {
        if((n-s)%b == 0)
        {
            cout<<"Yes"<<endl;
            return;
        }
        s=s*a;
    }
    cout << "No" << endl;
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