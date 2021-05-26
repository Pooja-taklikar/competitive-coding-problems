#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        long long zero = 0, one = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
                ans = ans + c0;
            }
            else
            {
                one++;
                ans = ans + c1;
            }
        }

        long long mini = 0;
        long long coins = 0;
        mini = mini + min(c0, c1);
        coins = mini * n;
        if (c0 >= c1)
        {
            coins = coins + zero * h;
            cout << min(coins, ans) << endl;
        }
        else if (c1 > c0)
        {
            coins = coins + one * h;
            cout << min(coins, ans) << endl;
        }
    }
}