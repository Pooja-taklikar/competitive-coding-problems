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

        int n = s.size();

        if (s[n - 1] == 'o' && s[n - 2] == 'p')
        {
            cout << "FILIPINO" << endl;
        }
        else if ((s[n - 1] == 'u' && s[n - 2] == 's' && s[n - 3] == 'e' && s[n - 4] == 'd') || (s[n - 1] == 'u' && s[n - 2] == 's' && s[n - 3] == 'a' && s[n - 4] == 'm'))
        {
            cout << "JAPANESE" << endl;
        }
        else if (s[n - 1] == 'a' && s[n - 2] == 'd' && s[n - 3] == 'i' && s[n - 4] == 'n' && s[n - 5] == 'm')
        {
            cout << "KOREAN" << endl;
        }
    }
}