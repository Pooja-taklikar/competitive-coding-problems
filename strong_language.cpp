#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N, K;
        cin >> N >> K;
        string s;
        cin >> s;

        int cnt = 0;
        int flag = 1;
        for (int i = 0; i < N; i++)
        {
            if ( s[i] == '*')
            {
                cnt++;
                if(cnt == K)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                cnt = 0;
            }
           
        }
        if(flag == 0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
       
    }
}