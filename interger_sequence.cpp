#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    int sum = 0;
    sum = sum + (n*(n+1))/2;
    if(sum % 2 == 0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
}
