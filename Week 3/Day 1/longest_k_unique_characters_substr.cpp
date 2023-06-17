#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k) 
{
    int i = 0, j = 0, n = s.size(), ans = -1, u = 0;
    int frq[26] = {0};
    
    while(j < n)
    {
        char c = s[j];
        if(frq[c - 'a'] == 0) u++;
        frq[c - 'a']++;
        
        if (u > k)
        {
            while(u > k)
            {
                char left = s[i];
                frq[left - 'a']--;
                if(frq[left - 'a'] == 0) u--;
                i++;
            }
        }
        
        if(u == k) ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}

int main(){
    string s;
    cin>>s;

    int k;
    cin>>k;

    cout<<longestKSubstr(s, k);

    return 0;
}