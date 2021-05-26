#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long s;
        s = n % 2 + n / 2;
        cout << s << endl;
    }
}