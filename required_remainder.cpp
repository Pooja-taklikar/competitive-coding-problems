#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x, y, n;
        cin >> x >> y >> n;

        cout << (n - y) / x * x + y << endl;
    }
}
