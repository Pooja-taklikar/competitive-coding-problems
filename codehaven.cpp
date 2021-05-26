#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int L;
        cin >> L;
        string s;
        cin >> s;
        int zero = 0, one = 0;
        int flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
            if (zero <= one)
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"NO"<<endl;
        }
    }
}