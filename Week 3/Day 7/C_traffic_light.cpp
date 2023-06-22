#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        char c;
        string s;

        cin>>n>>c>>s;

        vector<int> v;

        int fst_g;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'g')
            {
                fst_g = i;
                break;
            }
        }

        int last_g;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'g') last_g = i;
        }

        int fc = last_g;

        for(int i = last_g; i < n; i++)
        {
            if(s[i] == c)
            {
                fc = i;
                break;
            }
        }

        int cnt = 0, mx = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'g')
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
            else if(cnt == 0 && s[i] != c) continue;
            else cnt++;
        }

        if (fc != last_g)
        {
            mx = max(mx, n - fc + fst_g);
        }

        cout<<mx<<"\n";
    }

    return 0;
}