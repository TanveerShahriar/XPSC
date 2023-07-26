#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s, res;
	    cin>>s;
	    
	    int c = 1;
	    for(int i = 0; i < n - 1; i++)
	    {
	        if(s[i] != s[i+1])
	        {
	            res.push_back(s[i]);
	            if((c - 1) % 2 == 1) res.push_back(s[i]);
	            c = 1;
	        }
	        else c++;
	    }
	    res.push_back(s[n-1]);
	    if((c - 1) % 2 == 1) res.push_back(s[n-1]);
	    cout<<res<<'\n';
	}
    
	return 0;
}
