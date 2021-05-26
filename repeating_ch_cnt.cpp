#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int cnt = 1;
    int i = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {

            cnt = 1;
        }
        if (s[i] != s[i + 1])
        {
            cout << s[i] << cnt;
        }
    }
}
