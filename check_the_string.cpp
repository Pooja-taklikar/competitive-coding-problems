#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    int flag = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] <= s[i + 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    // cout << flag << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            a++;
        }
        else if (s[i] == 'b')
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    if (flag == 0 || (a == 0) || (b == 0))
    {
        cout << "NO" << endl;
    }
    else if ((flag == 1) && (a == c || b == c))
    {
        cout << "YES" << endl;
    }else
    {
        cout<<"NO"<<endl;
    }
}