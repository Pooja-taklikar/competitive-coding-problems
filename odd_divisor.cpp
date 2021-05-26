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
        if (n < 3)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 0;
            while (n != 1)
            {
                n = n / 2;
                if (n % 2 != 0 && n != 1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}