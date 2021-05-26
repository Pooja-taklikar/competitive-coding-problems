#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n);
    long long sum_b = 0;
    sum_b = b[n - 1] + b[n - 2];
    long long sum_a = 0;
    for (int i = 0; i < n; i++)
    {
        sum_a = sum_a + a[i];
    }
    if (sum_a <= sum_b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}