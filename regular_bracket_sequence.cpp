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
        int flag1 = 0, flag2 = 0, cnt = 0;
        // cout << s.size()<<endl;
        // cout<<s[0];
       int n = s.size();
        if ((s.size() % 2 == 1) || s[0] == ')'|| s[n-1] == '(')
        {
            cout << "NO" << endl;
        }
        else
        {

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                {
                    flag1++;
                }
                else if (s[i] == ')')
                {
                    flag2++;
                }
                else
                {
                    cnt++;
                }
            }
            int maxi = 0;
            int check = 0;
            maxi = max(flag1, flag2) - min(flag1, flag2);

            if (maxi == 0 && (maxi + cnt ) % 2 == 0)
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