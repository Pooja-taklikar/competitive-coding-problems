#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long h[n] ;
        for (long long i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        long long block = 0;
        int flag = 0;
        long long need = 0;
        for (int i = 0; i < n; i++)
        {
            block = block + h[i];
            need = need + i;
            if (need <= block)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
           
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}