#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while ((tc--))
    {
        int n,k;
        cin>> n;
        for(int i = 1;i <= n;i++)
        {
            k = i;
            for (int j = 1; j <= 2*n-1; j++)
            {
                if(j>=n+1-i&&j<=n-1+i)
                {
                    cout<<k;
                    if(j<(2*n)/2)
                    {
                        k++;
                    }
                    else
                    {
                        k--;
                    }
                }
                else
                {
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
    
} 

