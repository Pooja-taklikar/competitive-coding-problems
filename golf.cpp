#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N, x, k;
        cin >> N >> x >> k;
        if (x % k == 0)
        {
            cout << "YES" << endl;
        }
        else if (((N + 1) - x) % k == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}