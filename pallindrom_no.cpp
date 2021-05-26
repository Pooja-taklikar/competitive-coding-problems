#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ori ;
    cin>> ori ;
    int n = ori;
    int rev = 0;
    while(ori > 0)
    {
         rev = rev * 10 + ori % 10;
        
         ori = ori / 10;
         
    }
    if(n == rev)
    {
        cout<< "The number is  pallindrom" << " ";
    }
    else
    {
        cout<< "The number is  not pallindrom" << " ";
    }
   // cout << a <<endl;
    
    
    return 0;


}