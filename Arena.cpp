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
        int a[n];
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        sort(a , a + n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    cnt++;
                    break;
                }
            }
            
        }
       cout<<cnt<<endl; 
        
    }
}