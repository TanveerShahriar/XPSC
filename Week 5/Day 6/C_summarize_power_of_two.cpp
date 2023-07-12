#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    vector<int> two;
    for(int i = 0; i < 35; i++) two.push_back(1 << i);

    int res = 0;
    for(int i = 0; i < n; i++)
    {
        bool flag = true;
        for(int j = 0; j < 35; j++)
        {
            int x = two[j] - a[i];
            if(mp.count(x) && (mp[x] > 1 || (mp[x] == 1 && x != a[i]))) flag = false;
        }
        if(flag) res++;
    }

    cout<<res<<"\n";
       
    return 0;
}