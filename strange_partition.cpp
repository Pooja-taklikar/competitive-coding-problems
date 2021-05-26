#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ceil(ll a, ll b)
{
    return (a + b - 1) / b;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,x;
        cin>>n>>x;
       // cout<<n <<x;
        ll arr[n];
        ll sum = 0,sum1 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        sum = ceil(sum , x);
        for(ll i = 0;i < n; i++)
        {
            sum1 = sum1 + ceil(arr[i],x);
        }
        cout<<sum<<" "<<sum1<<endl;

        
    }
}