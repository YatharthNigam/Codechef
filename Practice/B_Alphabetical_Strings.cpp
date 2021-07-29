// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     char ch[26];
//     for (int i = 0; i < 26; i++)
//         ch[i] = 'a' + i;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int flag = 1;
//         vector<int> v(26, 0);
//         for (int i = 0; i < s.size(); i++)
//             v[s[i] - 'a'] = 1;
//         for (int i = 1; i < s.size() - 1; i++)
//             if (s[i] > s[i - 1] && s[i] > s[i + 1])
//                 flag = 0;
//         for (int i = 0; i < s.size(); i++)
//             if (v[i] != 1)
//                 flag = 0;
//         if (flag)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int apos = -1;
        bool flag = true;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'a')
            {
                apos = i;
                break;
            }
        }
        if (apos == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        int left = apos, right = apos;
        for (char i = 'a'; i < (char)(97 + len); i++)
        {
            if (s[left] != i && s[right] != i)
            {
                flag = false;
                break;
            }
            if (s[left] == i)
                left = left - 1;
            if (s[right] == i)
                right = right + 1;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}