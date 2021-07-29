#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0, o = 0, s = 0, a = 0, b = 0;
        string arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i].at(0) == 'X')
            {
                x++;
            }
            if (arr[i].at(0) == 'O')
            {
                o++;
            }
            if (arr[i].at(0) == '_')
            {
                s++;
            }
            if (arr[i].at(1) == 'X')
            {
                x++;
            }
            if (arr[i].at(1) == 'O')
            {
                o++;
            }
            if (arr[i].at(1) == '_')
            {
                s++;
            }
            if (arr[i].at(2) == 'X')
            {
                x++;
            }
            if (arr[i].at(2) == 'O')
            {
                o++;
            }
            if (arr[i].at(2) == '_')
            {
                s++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i].at(0) == arr[i].at(1) && arr[i].at(1) == arr[i].at(2))
            {
                if (arr[i].at(0) == 'X')
                {
                    a++;
                }

                else if (arr[i].at(0) == 'O')
                {
                    b++;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[0].at(i) == arr[1].at(i) && arr[1].at(i) == arr[2].at(i))
            {
                if (arr[0].at(i) == 'X')
                {
                    a++;
                }

                else if (arr[0].at(i) == 'O')
                {
                    b++;
                }
            }
        }
        if (arr[0].at(0) == arr[1].at(1) && arr[1].at(1) == arr[2].at(2))
        {
            if (arr[0].at(0) == 'X')
            {
                a++;
            }
            else if (arr[0].at(0) == 'O')
            {
                b++;
            }
        }
        if (arr[0].at(2) == arr[1].at(1) && arr[1].at(1) == arr[2].at(0))
        {
            if (arr[0].at(2) == 'X')
            {
                a++;
            }
            else if (arr[0].at(2) == 'O')
            {
                b++;
            }
        }
        if (o > x)
        {
            cout << 3 << endl;
        }
        else if (x - o > 1)
        {
            cout << 3 << endl;
        }
        else if (x > o && a == 1 & b == 0)
        {
            cout << 1 << endl;
        }
        else if (x == o && a == 0 && b == 1)
        {
            cout << 1 << endl;
        }
        else if (s == 0 && (a + b == 0))
        {
            cout << 1 << endl;
        }
        else if (s == 0 && (a == 2))
        {
            cout << 1 << endl;
        }
        else if (s > 0 && (a + b == 0))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}