#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, k;
        cin >> N >> k;
        int a[N];
        int i = 0;

        for (i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int cnt = 1;
        int sum = 0;
        int maxi = *max_element(a , a + N);

        for (int i = 0; i < N ; i++)
        {
            if(sum + a[i] <= k)
            {
                sum += a[i];
            }
            else{
                cnt++;
                sum = a[i];
            }
            
            
        }

        if (maxi > k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
    return 0;
}
