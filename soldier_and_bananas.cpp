#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, w;
    cin >> k >> n >> w;
    long long sum = 0, money = 0;
    for (long long i = 1; i <= w; i++)
    {
        sum = sum + i;
    }
    money = money + sum * k - n;
    if (money > 0)
    {
        cout << money << endl;
    }
    else
    {
        cout << "0"<< endl;
    }
}