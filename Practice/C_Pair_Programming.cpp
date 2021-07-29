#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;
        int an[n], bm[m];
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> an[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> bm[i];
        }
        vector<int> ans;
        int i = 0, j = 0;
        while (i < n || j < m)
        {
            if (i < n && an[i] <= k)
            {
                ans.push_back(an[i]);
                if (an[i] == 0)
                    k++;
                i++;
            }
            else if (j < m && bm[j] <= k)
            {
                ans.push_back(bm[j]);
                if (bm[j] == 0)
                    k++;
                j++;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << -1;
        else
        {
            for (int k = 0; k < ans.size(); k++)
            {
                cout << ans[k] << " ";
            }
        }
        cout << endl;
    }
}