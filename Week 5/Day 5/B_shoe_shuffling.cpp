#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> s(n), res;
        for(int i = 0; i < n; i++) cin>>s[i];

        int l = 0, r = 0;
        bool flag = true;

        while (r < n)
        {
            while (r < n - 1 && s[r] == s[r+1]) r++;
            
            if(l == r) flag = false;
            else
            {
                res.push_back(r + 1);
                for(int i = l + 1; i <= r; i++) res.push_back(i);
            }

            l = r + 1;
            r++;
        }
        
        if(flag)
        {
            for(int r : res) cout<< r << " ";
            cout<<"\n";
        }
        else cout<< -1 << "\n";
    }       

    return 0;
}