#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin>> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        int pd = a[1]-a[0];
        int curr = 2;
        int ans = 2;
        for (int i = 2; i < n; i++)
        {
            if(pd==a[i]-a[i-1])
            {
                curr++;
                ans = max(ans , curr);
            }
            if(pd!=a[i]-a[i-1])
            {
                ans = 2;
                curr = 2;
            }
        }
       // cout<< curr << " ";
        cout<< ans ;

        
    }
}