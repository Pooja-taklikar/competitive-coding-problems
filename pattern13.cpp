#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int num = 1;
        int alp = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if(i % 2 != 0)
                {
                    cout<<num ;
                    num++;
                }
                else
                {
                    cout<<((char)(alp+64));
                    alp++;
                }
            }
            cout << endl;
        }
    }
}