#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int X,A,B;
        cin>>X>>A>>B;
        cout<<(A+(100 - X)*B)*10 <<endl;
    }
}