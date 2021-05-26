#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc
    cin>> tc;

    while(tc--)
    {
    string S;
    cin>>S ;
    
    int N = S.length();
    }
   /* for (int i = 0; i < N; i++)
    {
        cout << S[i] <<endl;
    }*/
    int count ;
    int grp = 0 ;
    
    for (int i = 0; i <(N-1) ; i++)
    {
        if (S[i]!= S[i + 1])
        {
            grp = grp + 1 ;
            i++;
           // cout << grp << endl;
        }
    }
    if(S[N-1]=='1')
    {
        grp = grp + 1;
    }
    cout << grp <<endl;


    return 0;
}