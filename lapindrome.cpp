#include <bits/stdc++.h>
using namespace std;
int main()
{
        int tc;
        cin >> tc;
        while (tc--)
        {
                string s, s1 = " ", s2 = " ";
                cin >> s;
                int len = s.length();
                /*  for (int i = 0; i < len; i++)
                {
                        if (len % 2 != 0)
                        {

                                if (s[i] < len / 2)
                                {
                                        s1 += s[i];
                                }
                                if (len / 2 > s[i])
                                {
                                        s2 += s[i];
                                }
                        }
                        else
                        {
                                if (s[i] < len / 2)
                                {
                                        s1 += s[i];
                                }
                                if (len / 2 >= s[i])
                                {
                                        s2 += s[i];
                                }
                        }
                }*/
                s1 = s.substr(0, len / 2);
                if(len % 2 == 0)
                {
                s2 = s.substr(len / 2, len);
                }
                else
                {
                   s2 = s.substr((len / 2)+1, len);     
                }
                sort(s1.begin(), s1.end());
                sort(s2.begin(), s2.end());

                if (s1 == s2)
                {
                        cout << "YES" << endl;
                }
                else
                {
                        cout << "NO" << endl;
                }
        }
}