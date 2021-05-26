#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;
        int rev = 0;
        while (N > 0)
        {
            rev = N % 10;
            cout<<rev;
            N = N / 10;
        }
        cout << endl;
    }
  //  return 0;
}