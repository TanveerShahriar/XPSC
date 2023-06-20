#include <bits/stdc++.h>
using namespace std;

int main() {
    string res;
    for(int i = 0; i < 20; i++) res += "Yes";

	int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        size_t pos = res.find(s);

        if(pos != string::npos) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    
    return 0;
}