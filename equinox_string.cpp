#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N, A, B;
        cin >> N >> A >> B;
        int a = 0, b = 0;
        // string s;
        for (int i = 1; i <= N; i++)
        {
            string s;
            cin >> s;

            if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
            {
                a = a + A;
               
            }
            else
            {
                b = b + B;
                
            }
        }
      
        if (a == b)
        {
            cout << "DRAW" << endl;
        }
        else if (a > b)
        {
            cout << "SARTHAK" << endl;
        }
        else
        {
            cout << "ANURADHA" << endl;
        }
    }
}