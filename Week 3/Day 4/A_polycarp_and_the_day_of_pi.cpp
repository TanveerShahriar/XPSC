#include <bits/stdc++.h>
using namespace std;

int main() {
    string pi = "314159265358979323846264338327950288419716939937510";
	int t;
    cin >> t; 
    while (t--)
    {
       string s;
       cin>>s;

       int c = 0;
       for(int i = 0; i < s.size(); i++)
       {
        if(s[i] == pi[i]) c++;
        else break;
       }
       cout<<c<<"\n";
    }
    
    return 0;
}