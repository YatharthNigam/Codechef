#include <bits/stdc++.h>
using namespace std;

int expandFromMiddle(string s, int left, int right)
{
    while (left >= 0 && right < s.size() && s.at(left) == s.at(right))
    {
        --left;
        ++right;
    }
    return (right - left - 1);
}

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (s == "")
    {
        cout << "";
        return 0;
    }
    int end = 0, start = 0, len, len1, len2;
    for (int i = 0; i < n; i++)
    {
        len1 = expandFromMiddle(s, i, i);
        len2 = expandFromMiddle(s, i, i + 1);
        len = max(len1, len2);
        if (len > (end - start))
        {
            start = i - ((len - 1) / 2);
            end = i + (len / 2);
        }
    }
    string ans = s.substr(start, end - start + 1);
    cout << ans.size() << endl
         << ans << endl;
    return 0;
}