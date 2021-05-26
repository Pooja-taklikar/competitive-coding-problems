#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s , s2 = "hello";
    int j = 0 , pas = 0;
    cin>> s;
    for (int i = 0; i < s.size(); i++)
    {
       if(s[i] == s2[j])
       {
           j++;
           pas++;
           if(pas == 5)
           {
               break;
           }
       }
    }
    if(pas == 5)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout<< " NO" <<endl;
    }
    
     


}