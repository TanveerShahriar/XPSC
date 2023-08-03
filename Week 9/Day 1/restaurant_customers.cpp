#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<pair<int,int>> v;
    
    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(pair<int,int> {a,1});
        v.push_back(pair<int,int> {b,0});
    }
    
    sort(v.begin(), v.end());
    
    int mx = 0, res = 0;
    for(int i = 0; i < 2 * n; i++)
    {
        if(v[i].second == 1) res++;
        else res--;
        
        if(res > mx) mx = res;
    }
    
    cout<<mx<<'\n';
    
    return 0;
}