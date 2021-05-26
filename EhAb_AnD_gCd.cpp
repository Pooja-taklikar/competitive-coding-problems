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
        ll x;
        cin >> x;
        ll b = 1, a = x - b;
        ll g = __gcd(a, b);
        ll l = lcm(a, b);
        if ((g + l) == x)
            {
                cout<<a<<" "<<b<<endl;
            }

            
    }
}