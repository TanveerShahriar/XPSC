#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n, k;
        cin>>n>>k;

        map<int, pair<int, int>> mp;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            if(!mp.count(a))
            {
                mp[a].first = i;
                mp[a].second = i;
            }
            else mp[a].second = i;
        }

        for(int i = 0; i < k; i++)
        {
            int a, b;
            cin>>a>>b;

            if(!mp.count(a) or !mp.count(b) or mp[a].first > mp[b].second)
            {
                cout<<"NO";
            }
            else cout<< "YES";
            cout<<"\n";
        }
    }

    return 0;
}