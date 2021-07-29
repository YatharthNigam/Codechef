#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int N, M;
        cin >> N >> M;
        long long int count = 0;
        long long int arr[N + 1];
        for (long long int i = 1; i <= N; i++)
        {
            long long int a = (M % i);
            count = count + arr[a];
            for (long long int j = a; j <= N; j += i)
            {
                arr[j] += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}