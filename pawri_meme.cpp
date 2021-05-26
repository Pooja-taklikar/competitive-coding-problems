#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        string S2("party");
        string r("pawri");
        cin >> S;
        if (S.length() < S2.length())
        {
            cout << S << endl;
        }
        else
        {
            size_t found = S.find(S2);
         S.replace(S.find(S2), S2.length(), "pawri");
            cout << S << endl;
        }
    
    }
    return 0;
}