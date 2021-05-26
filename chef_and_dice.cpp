#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    long long N;
    cin >> N;
    long long sum = 0;
    for(int i =1;i < 7;i++)
    {
        if(N != i)
        {
           sum += i;
        }
    }
    cout<< sum <<endl;

    }

}