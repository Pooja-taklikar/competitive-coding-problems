#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string ori = n;
    // string rev;
    reverse(n.begin(), n.end());
    // cout << n <<endl;
    if (ori == n)
    {
        cout << "The number is a pallindrome "
             << " ";
    }
    else
    {
        cout << "The number is not a pallindrome "
             << " ";
    }
    return 0;
}