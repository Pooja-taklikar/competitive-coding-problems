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
        int alp = 1;

        for (int i = n; i >= 1; i--)
        {
            
            for (int j = n; j >= 1; j--)
            {
                if (i <= j)
                {
                    cout << i;
                }
                else
                {
                    cout << ((char)(alp + 64));
                }
            }
            alp++;
            
            cout << endl;
            
        }
    }
}
