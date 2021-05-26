#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>> tc;
    while(tc--)
    {
        long long A,R,Z,mini;
        cin>> A >> R >> Z;
        long long p , t ;
        p = A % Z;
        t = R % Z ;
        
        mini = min( p , t);
        if(p + t == Z)
        {
        cout<< mini << "\n" <<endl;
        }
        else
        {
            if(p + t > Z)
            {
                int a = p + t - Z;
                mini = mini - a;
                cout<< mini <<"\n"<< endl;
            }
            else
            {
                cout<< "0" <<"\n"<< endl;
            }
        }

    }
}