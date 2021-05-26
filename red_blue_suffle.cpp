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
        string  R, B;
        cin >> R >> B;
        long long r = 0, b = 0;
        for (long long i = 0; i < n; i++)
        {
            if (R[i] > B[i])
            {
                r++;
            }
            else if (R[i] < B[i])
            {
                b++;
            }
        }
        if (r > b)
        {
            cout << "RED" << endl;
        }
        else if (r < b)
        {
            cout << "BLUE" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
}