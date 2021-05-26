#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N, M, flag = 0;
        cin >> N >> M;
        int a[N];
        int i = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sort(a, a + N);
        for (int i = 0; i < N - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1 ||( M == 1 && N == 1))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}