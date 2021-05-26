#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int A, B, C, n;
        cin >> A >> B >> C >> n;
        int a = 0, b = 0, c = 0;
        if (A >= B && A >= C)
        {
            b = A - B;
            c = A - C;
        }
        else if (B >= A && B >= C)
        {
            a = B - A;
            c = B - C;
        }
        else if (C >= A && C >= B)
        {
            a = C - A;
            b = C - B;
        }
        n = n - (a + b + c);
        if (n < 0)
        {
            cout << "NO" << endl;
        }
        else if (n % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}