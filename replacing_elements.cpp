#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n , d;
        cin>>n>>d;
        int arr[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr , arr + n);
        int sum = 0;
        sum = arr[0] + arr[1];
       
        if (arr[n - 1] <= d || sum <= d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
