#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int c = a % b;
        if(a % b == 0)
        {
            cout<<"0"<<endl;
        }
        else{
            c = b - c;
            cout<<c<<endl;
        }
    }
}