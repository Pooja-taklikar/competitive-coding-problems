#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int p1, p2;
        cin >> p1 >> p2;
        string s;
        cin >> s;
        int u = 0, d = 0, l = 0, r = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'U')
            {
                u++;
            }
            if (s[i] == 'D')
            {
                d++;
            }
            if (s[i] == 'L')
            {
                l++;
            }
            if (s[i] == 'R')
            {
                r++;
            }
        }
      //  cout << u << d << l << r << endl;
        if (p1 >= 0 && p2 >= 0)
        {
            if (r >= p1 && u >= p2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (p1 <= 0 && p2 <= 0)
        {
            p1 = p1 * (-1);
            p2 = p2 * (-1);
            if (l >= p1 && d >= p2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (p1 >= 0 && p2 <= 0)
        {
            p2 = p2 * (-1);
            if (r >= p1 && d >= p2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            p1 = p1 * (-1);
            if (u >= p2 && l >= p1)
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