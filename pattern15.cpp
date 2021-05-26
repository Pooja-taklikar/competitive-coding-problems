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
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
               /* if (j % 2 != 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << "#";
                }*/
                cout<<"*";
            }
            cout << endl;
        }
        // cout << endl;
    }
}