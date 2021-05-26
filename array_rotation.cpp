#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N;
    cin >> N;
    ll A[N] = {};
    ll sum1 = 0;
    for (ll i = 0; i < N; i++)
    {
        cin >> A[i];
        sum1 = sum1 + A[i];
    }
    sum1 = sum1 * 2;

    ll Q;
    cin >> Q;
    ll X[Q] = {};
    ll sum2 = 0;
    for (ll i = 0; i < Q; i++)
    {
        cin >> X[i];
        
    }
    if(Q > 0)
    {
        cout<<sum1<<endl;
    }
    for (ll i = 1; i < Q ; i++)
    {
            sum1 = sum1 + sum1;
            cout << sum1 << endl;
       
    }
    
}