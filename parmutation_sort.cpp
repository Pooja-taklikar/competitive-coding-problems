#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ans = a[i];

            for (int j = i + 1; j < n; j++)
            {
                if (ans > a[j])
                {
                    mini = j;
                    ans = a[j];
                }
            }

            if (a[i] > ans)
            {
                v.push_back(i);
                v.push_back(mini);
                cnt++;
                swap(a[mini], a[i]);
            }
        }

        cout << cnt << "\n";

        for (int i = 0; i < v.size(); i++)
        {

            cout << v[i] << " ";
            if (i % 2 == 1 and i != 0)
            {
                cout << "\n";
            }
        }
    }
}
