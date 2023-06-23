#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<char> a;

        for(int i = 0; i < n; i++)
        {
            if (i <= n-2 && s.substr(i, i+2) == "00")
            {
                a.pop_back();
                a.push_back((char) stoi(s.substr(i-1, i+1)) + 96);
            }
            else if(s[i] == '0')
            {
                if(s[i-1] == '0') continue;
                a.pop_back();
                a.pop_back();
                a.push_back((char) stoi(s.substr(i-2, i)) + 96);
            }
            else a.push_back((char) stoi(s.substr(i, i+1)) + 96);
        }

        for(int i = 0; i < a.size(); i++) cout<<a[i];
        cout<<"\n";
    }

    return 0;
}