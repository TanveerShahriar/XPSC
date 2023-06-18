#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n;

        string s[n];
        map<string, bool> mp;

        for (int i = 0; i < n; i++) 
        {
            cin >> s[i];
            mp[s[i]] = true;
        }

        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = 1; j < s[i].length(); j++) {
                string pre = s[i].substr(0, j);
                string suf = s[i].substr(j, s[i].length() - j);
                if (mp[pre] && mp[suf]) flag = true;
            }
            cout << flag;
        }
        cout << '\n';
    }
    
    return 0;
}