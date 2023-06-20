#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        unordered_map<string, bool> a;
        int c = 0;

        for(int i = 0; i < n-1; i++)
        {
            string temp = s.substr(i,2);
            if(a[temp] == 0)
            {
                c++;
                a[temp] = true;
            }
        }

        cout<<c<<"\n";
    }
    
    return 0;
}