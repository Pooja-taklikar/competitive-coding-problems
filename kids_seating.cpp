#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int ans = 4 * n;
        for (int i = n; i > 0; i--)
        {
            ans = ans - 2;
            cout<<ans<<" ";
        }
        cout<<endl;
        
    }
}