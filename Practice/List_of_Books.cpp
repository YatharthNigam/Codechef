#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        cout << arr[temp-1] << endl;
        for (int j=temp-1; j <n;j++)
        {
            arr[j]=arr[j+1];
        }
    }
    return 0;
}