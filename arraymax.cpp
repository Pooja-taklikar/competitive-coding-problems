#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mx = -19999999;
    int n;
    cin >> n;
    int a[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        mx = max( mx , a[i]);
        cout << mx << " ";
    }
   // cout << mx << " ";
    return 0;
}