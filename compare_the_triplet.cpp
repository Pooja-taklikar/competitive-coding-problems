#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    int a[3], b[3];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int A =0,B = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            A++;
        }
        else if (a[i] < b[i])
        {
            B++;
        }
    }
    cout<<A <<" "<<B<<endl;
}