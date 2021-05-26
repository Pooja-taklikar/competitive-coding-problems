
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int H, x;
    cin >> H >> x;

    int arr[N];
    int i = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int sum;
    sum = arr[N - 1] + x;
    if (H <= sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}