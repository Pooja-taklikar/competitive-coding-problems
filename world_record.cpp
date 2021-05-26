#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        float a = 100 / (k1 * k2 * k3 * v);
       //  fixed << setprecision(2)<< v ;
        if (a < 9.575)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}