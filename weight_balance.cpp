#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>> T ;
    while(T--)
    {
        long long w1,w2,x1,x2,M,w = 0;
        cin>> w1 >> w2 >> x1 >> x2 >> M;
        w = w2 - w1;
        if(x1*M ==w || w == x2*M || (x1*M < w && w < x2*M) )
        {
            cout << 1 <<endl;
        }
        else   
        {
            cout << 0 <<endl;
        }

    }
    return 0;
}
