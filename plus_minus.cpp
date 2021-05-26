#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int zero = 0, posi = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
        else if (a[i] > 0)
        {
            posi++;
        }
        else if (a[i] < 0)
        {
            neg++;
        }
    }
    double r1 = (double(posi)) / (double(n));
    double r2 = (double(neg)) / (double(n));
    double r3 = (double(zero)) / (double(n));
    cout << fixed;
    cout << setprecision(6);
    cout << r1 << endl
         << r2 << endl
         << r3 << endl;
}