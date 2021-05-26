#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        // cout << endl;
        long long N;
        cin >> N;
        // cout << endl;
        long long a[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        long long diff = 0;
        long long sum = 0;
        for (long long i = 0; i < N; i++)
        {
            if (i >= N / 2)
            {
                break;
            }
            if (a[N - 1 - i] >= a[i])
            {
                diff = a[N - 1 - i] - a[i];
            }
            else
            {
                diff = a[i] - a[N - 1 - i];
            }
            sum += diff;
        }

        if (sum == 1 || sum == 0)
        {
            cout << "KITKAT"
                 << "\n"
                 << endl;
        }
        else
        {
            for (long long i = 2; i <= sum / 2; i++)
            {
                if (sum % i == 0)
                {
                    cout << "KAT"
                         << "\n"
                         << endl;

                    break;
                }
                else
                {
                    cout << "KIT"
                         << "\n"
                         << endl;

                    break;
                }
            }
        }
    }
}