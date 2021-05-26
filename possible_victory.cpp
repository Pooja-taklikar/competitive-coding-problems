#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R,O,C,a,b,d;
    cin>> R >> O >>C;

    a = 20 - O;
    b = a * 36;
    C = C + b;
    if(C > R)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

  return 0;
}