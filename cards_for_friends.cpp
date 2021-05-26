#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long w, h, n;
        cin >> w >> h >> n;
        long long cnt = 1;
        while (1)
        {
            if (w % 2 == 0)
            {
                cnt = cnt * 2;
                w = w / 2;
            }
            else if (h % 2 == 0)
            {
                cnt = cnt * 2;
                h = h / 2;
            }
            else
            {
                break;
            }
        }
        if (cnt >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}