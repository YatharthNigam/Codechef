#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    {
        map<char, int> m;
        for (int i = 0; i < n; i++)
            m[s[i]]++;
        for (char i = 'a'; i <= 'z'; i++)
            if (m[i] == 0)
            {
                cout << i << endl;
                return;
            }
    }
    //if one alphabet not found
    {
        set<string> set;
        for (int i = 0; i < n - 1; i++)
        {
            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            set.insert(temp);
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            for (char j = 'a'; j <= 'z'; j++)
            {
                string temp = "";
                temp += i;
                temp += j;
                if (set.find(temp) == set.end())
                {
                    cout << temp << endl;
                    return;
                }
            }
        }
    }
    {
        set<string> set;
        for (int i = 0; i < n - 2; i++)
        {
            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            temp += s[i + 2];
            set.insert(temp);
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            for (char j = 'a'; j <= 'z'; j++)
            {
                string temp = "a";
                temp += i;
                temp += j;
                if (set.find(temp) == set.end())
                {
                    cout << temp << endl;
                    return;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}