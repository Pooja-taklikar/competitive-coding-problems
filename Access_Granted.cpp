#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long N = 4;
        long long a1[N], a2[N];

        for (long long i = 0; i < N; i++)
        {
            cin >> a1[i];
        }
         for (long long i = 0; i < N; i++)
        {
            cin >> a2[i];
        }
        int sub;
        int add = 0;
        for (long long i = 0; i < N; i++)
        {
            sub = a1[i] / a2[i];
            sub = a1[i] - sub * a2[i];

            add += sub;
        }
        bool a = false;
        for (long long i = 2; i < add; i++)
        {

            if (add % i == 0)
            {
                a = true;
                break;
            }
            else
            {
                a = false;
            }
        }
        if (add == 0 || add == 1)
        {
            cout << "Access Denied" << endl;
        }
        else
        {

            if (a = true)
            {
                cout << "Access Granted" << endl;
            }
            else
            {
                cout << "Access Denied" << endl;
            }
        }
    }
}