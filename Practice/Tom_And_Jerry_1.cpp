#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int x = (abs(d - b) + abs(c - a));
        if (x > k)
        {
            cout << "NO" << endl;
        }
        else if (x == k)
        {
            cout << "YES" << endl;
        }
        else if ((k - x) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
