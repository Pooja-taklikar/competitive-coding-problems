#include <bits/stdc++.h>
using namespace std;
//long long m = 10 ^ 9 + 7;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long m = 1e9 + 7;
        long long x = 2;
        long long y = n - 1;
        long long temp = 1;
        while (y > 0)
        {
            if (y % 2 != 0)
            {
                temp = x * temp % m;
            }
            x = x * x % m;
            y = y / 2;
        }
        cout << temp << endl;
    }
}