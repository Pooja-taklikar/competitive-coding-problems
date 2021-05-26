#include<bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>> N;
        int A[N];
        int B[N];
        for (int i = 0; i < N; i++)
        {
            cin>> A[i];
            
        }
         for (int i = 0; i < N; i++)
        {
            
            cin>> B[i];
        }
       // int sub = 0;
        int cnt = 0;
        if(A[0] >= B[0])
        {
            cnt++;
        }
        
        for (int i = 1; i < N; i++)
        {
            

            int sub = 0;
            sub = A[i]-A[i-1];
            if (sub >= B[i])
            {
                cnt = cnt + 1;
            }
          
        }
        cout << cnt << endl;
        
    }
    return 0;

}