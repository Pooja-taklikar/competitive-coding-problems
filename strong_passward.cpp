#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool a = false, b = false,c = false, d = false;
    int cnt = 0;
   // int p = s.size()+cnt;
    for (int i = 0; i < s.size(); i++)
    {
        
        if (s[i] >= 48 && s[i] <= 57)
        {
           a = true;
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {
           b = true;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
           c = true; 
        }
        else
        {
           d = true;
        }
    }
       if(!a)
       {
          cnt++;
       }
       if (!b)
       {
           cnt++;
       }
       if(!c)
       {
           cnt++;
       }
       if(!d)
       {
           cnt++;
       }
   int p;
    p = s.size()+cnt;
      
    if (p >= 6)
    {
        cout<<cnt ;
    }
    else
    {
        cout<< 6 -  p + cnt << endl;
    }
}