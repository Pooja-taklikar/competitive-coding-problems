#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string S1, S2;
        cin >> S1 >> S2;
        int sum = 0;
        int sum2 = 0;
        for (int i = 0; i < S1.length(); i++)
        {
            sum += S1[i];
            sum2 += S2[i];
        }
        // cout << sum << endl;
        // cout << sum2 << endl;
        int diff = sum2 - sum;
        if (diff == 0)
        {
            cout << "No One" << endl;
        }
        else
        {

            if (1 <= diff && diff <= 10)
            {
                cout << "Rashmi" << endl;
            }
            else
            {
                cout << "Mohit" << endl;
            }
        }
    }
}