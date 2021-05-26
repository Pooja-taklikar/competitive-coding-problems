#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int p, k = 0, flag;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                k = k + 1;
            }
            else
            {
                k--;
                k = k + i;
            }
            flag = 1;
            p = k;
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                if (j <= 2 * i - 1)
                {
                    if (flag == 1)
                    {
                        cout << p;
                        if (i % 2)
                        {
                            p++, k++;
                        }
                        else
                        {
                            p--;
                        }
                    }
                    else
                    {
                        cout << "#";
                    }
                    flag = 1 - flag;
                }
            }

            cout << endl;
        }
    }
}