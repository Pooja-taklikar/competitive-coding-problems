#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int N, M;
        cin >> N >> M;
        int c = s.size() - M-1;
       // cout<<c<<endl;
        sort(s.begin() + N, s.end()- c,greater<int>());
        cout << s << endl;
        
    }
}