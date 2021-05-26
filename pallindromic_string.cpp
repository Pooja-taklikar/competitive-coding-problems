#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string A;
        string B;
        cin >> A >> B;
        int cnt = 0;
        for (int i = 0; i < A.length(); i++)
        {

            for (int j = 0; j < B.length(); j++)
            {
                if (A[i] == B[j])
                {
                    cnt = 1;
                    break;
                }
            }
            if (cnt == 1)
            {
                break;
            }
        }
        if (cnt == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}