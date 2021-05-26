#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    long long A, B, N;
    cin >> A >> B >> N;

    if (N % 2 != 0)
    {
      A = A * 2;
    }

    long long div;
    div = max(A, B) / min(A, B);

    cout << div << endl;
  }
  return 0;
}