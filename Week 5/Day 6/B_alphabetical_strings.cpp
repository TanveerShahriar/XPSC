#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        vector<int> arr(26);
        int idx = -1;
        for(int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'a']++;
            if(s[i] == 'a') idx = i;
        }

        bool flag1 = true, flag2 = true;
        for(int i = 0; i < s.size(); i++)
        {
            if(arr[i] != 1) flag1 = false;
        }

        for(int i = 0; i < idx; i++)
        {
            if(s[i] <= s[i+1]) flag2 = false;
        }

        for(int i = idx; i < s.size() - 1; i++)
        {
            if(s[i] >= s[i+1]) flag2 = false;
        }

        if(flag1 && flag2) cout<<"YES";
        else cout<<"NO";

        cout<<"\n";
    }
       
    return 0;
}