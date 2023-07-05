#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int c = 0;

        vector<int> dis;
        for(int i = 0; i < n; i++) if(s[i] == '1') dis.push_back(i);

        if(dis.size() != 0)
        {
            if(dis[0] != 0) c += dis[0] / (k+1);
            if(dis.size() == 1) c += (n - dis[0] - 1) / (k + 1);

            for(int i = 0; i < dis.size() - 1; i++) c += (dis[i + 1] - dis[i]) / (2 * k + 1);

            if(n == k) c = 0;
        }
        else
        {
            c += n / (k + 1);
            if(n % (k+1)) c+=1;
            if(n == k) c = 1;
        }

        cout<<c<<"\n";
    }

    return 0;
}