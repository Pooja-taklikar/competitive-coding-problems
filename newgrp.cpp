#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int cnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            int ok = 0;
            while (s[i] == '1')
            {
                i++;

                ok = 1;
            }
            if (ok)
                cnt++;
        }

        cout << cnt << "\n";
    }
}