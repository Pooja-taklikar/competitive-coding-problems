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

        int p[n] = {};
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        for (int i = 1; i <= n - 2; i++)
        {
           // cout << p[i] << p[i + 1] << p[i + 2];
            if (p[i] < p[i + 1] && p[i + 1] > p[i + 2])
            {
                cout << "YES" << endl;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
    }
}