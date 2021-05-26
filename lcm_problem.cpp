#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll l, r;
        cin >> l >> r;
        ll x = l, y = r;
       for (ll i = l; i < r; i++)
       {
          ll lc = lcm(l , r);
           if(x<=lc && lc >= y)
           {
               cout<<l<<" "<<r<<endl;
               break;
           }
           r--;
       }
       
    }
}