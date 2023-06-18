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

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = s[i][0] - 'a'; j < 26; j++)
            {
                string temp;
                temp.push_back('a' + j);
                temp.push_back(s[i][1]);

                if(temp != s[i] && mp[temp]) cnt++;
            }

            for(int j = s[i][1] - 'a'; j < 26; j++)
            {
                string temp;
                temp.push_back(s[i][0]);
                temp.push_back('a' + j);

                if(temp != s[i] && mp[temp]) cnt++;
            }
        }

        cout<<cnt<<"\n";
    }
    
    return 0;
}