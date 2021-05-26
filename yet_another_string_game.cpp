#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>> tc;
    while(tc--)
    {
        string s;
        cin>>s;
        for(int i = 0;i < s.size();i++)
        {
            if(i % 2 == 0)
            {
               if(s[i] > 'a')
               { 
                   s[i] = 'a';

               }
               else
               {
                   s[i] = s[i] + 1;
               }
            }
            else
            {
               if(s[i] < 'z')
               {
                   s[i] = 'z';
               }
               else
               {
                   s[i] = s[i] - 1;
               }
            }
        }
        cout<<s<<endl;
    }
}
