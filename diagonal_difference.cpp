#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + a[i][j];
            }
            if ((i + j) == n - 1)
            {
                sum2 = sum2 + a[i][j];
            }
        }
    }
    int diff = max(sum1, sum2) - min(sum1, sum2);
    cout << diff << endl;
}