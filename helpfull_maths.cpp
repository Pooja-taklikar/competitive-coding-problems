#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1;
   // cout << s.size() << endl;
    sort(s.begin(), s.end());
    if (s.size() == 1)
    {
        cout << s << endl;
    }
    else
    {

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != '+')
            {
                s1.push_back(s[i]);

                if (i == s.size() - 1)
                {
                    break;
                }
                s1.push_back('+');
            }
        }
        cout << s1 << endl;
    }
}