#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the element of array" << endl;
    cin >> n;

    int arr[n];
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    /* for (int i = 0; i < n - 1; i++)
    {
       if (i % 2 == 0 && arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        if (i % 2 != 0 && arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }*/

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}