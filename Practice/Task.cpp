#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    float h = stoi(s.substr(0, 2));
    float m = stoi(s.substr(3, 2));
    if (m > (h + (h / 11)))
        cout << h;
    else
        cout << h - 1;
}