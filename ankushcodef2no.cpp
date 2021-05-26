#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,n;
	    cin>>a>>b>>n;
	   if(n%2!=0)
	    {
	        a=a*2;
	    }
	    int max,min;
	    if(a>b)
	    {
	        max=a;
	        min=b;
	    }
	    else
	    {
	        max=b;
	        min=a;
	    }
	    int ans=max/min;
	    cout<<ans<<endl;
	}
	return 0;
}