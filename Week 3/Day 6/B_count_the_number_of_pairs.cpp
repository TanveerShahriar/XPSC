#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--)
	{
		int n, k;
        cin >> n >> k;

        string s;
        cin>>s;

        vector<int> cap(26), sma(26);
        for(int i = 0; i < n; i++)
        {
            if('A' <= s[i] && 'Z' >= s[i]) cap[s[i] - 'A']++;
            else sma[s[i] - 'a']++;
        }

        int res = 0;
        for(int i = 0; i < 26; i++)
        {
            int temp = min(sma[i], cap[i]);
            res += temp;
            sma[i] -= temp;
            cap[i] -= temp;
            int add = min(k, max(sma[i], cap[i]) / 2);
            k -= add;
            res += add;
        }
        cout<<res<<"\n";
	}
}