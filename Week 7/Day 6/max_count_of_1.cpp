#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    string s;
	    cin>>n>>s;
	    
	    string res1 = "1", res2 = "0";
	    for(int i = 0; i < n-1; i++)
	    {
	        res1.push_back((char)((res1[i] - '0') ^ (s[i] - '0')) + '0');
	        res2.push_back((char)((res2[i] - '0') ^ (s[i] - '0')) + '0');
	    }
	    
	    int c1 = 0, c2 = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(res1[i] == '1') c1++;
	        if(res2[i] == '1') c2++;
	    }
	    cout<<max(c1,c2)<<'\n';
	}
	
	return 0;
}
