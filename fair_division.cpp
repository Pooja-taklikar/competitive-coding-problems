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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
      //  sort(a, a + n);
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
           
            if (a[i] == 1)
            {
                cnt1++;
            }
            if (a[i] == 2)
            {
                cnt2++;
            }
        }
        if (cnt1 % 2 == 1)
        {
            cout << "NO"
                 << "\n";
        }
        else if (cnt2 % 2 == 1 && cnt1 < 2)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
}
