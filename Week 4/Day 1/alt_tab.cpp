#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<string, int> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >>s;

        mp[s] = i;
    }

    vector<pair<string, int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second; 
    });

    reverse(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); i++)
    {
        int sz = vec[i].first.size();
        cout<<vec[i].first.substr(sz - 2);
    }

    return 0;
}