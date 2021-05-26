#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin>> tc;
    while(tc--)
    {
        long long N;
        long long b[N];
        long long a[N] ={ };
        for (int  i = 0; i < N; i++)
        {
           cin>> a[i] ;
        }
       
       // sort(a , a + N);
         for (int  i = 0; i < N; i++)
        {
           a[i] = b[i];
        }
        for (int  i = 0; i < N; i++)
        {
           cout<< a[i];
           cout<< b[i];
        }



        
    }
}