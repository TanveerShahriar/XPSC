#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    
	    string s;
	    cin>>s;
	    
	    if(s[0] == '0')
	    {
	        s[0] = '1';
	        k--;
	    }
	    
	    for(int i = 0; i < n; i++)cout<<s[i];
	    
	    for(int i = 0; i < k; i++) cout<<0;
	    cout<<'\n';
	}
	
	return 0;
}
