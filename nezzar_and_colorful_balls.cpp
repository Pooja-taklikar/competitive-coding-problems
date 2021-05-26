#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>> tc;
    while(tc--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i < n ; i++)
    {
        cin>>a[i];
    }
   sort(a , a + n);

    int maxi = 0;
    for(int i = 0; i < n ; i++)
    {
        int cnt = 1;
       for(int j = i + 1; j < n;j++)
       {
          if( a[i] == a[j])
          {
           cnt++;
          }
       }
       maxi = max(maxi,cnt);
    }
    cout<<maxi << endl;
    }
}



