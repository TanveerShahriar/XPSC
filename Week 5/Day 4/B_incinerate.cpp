#include<bits/stdc++.h>
using namespace std;

bool comparePairs(pair<int, int>& a, pair<int, int>& b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}


int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<pair<int, int>> ph(n);
        for(int i = 0; i < n; i++) cin>>ph[i].second;
        for(int i = 0; i < n; i++) cin>>ph[i].first;

        sort(ph.begin(), ph.end(), comparePairs);

        int temp = 0;
        k += ph[0].first;
        bool flag = true;

        for(int i = 0; i < n; i++)
        {
            k -= ph[i].first;
            if(ph[i].second <= temp) continue;

            if(k > 0)
            {
                temp += k;
                while (ph[i].second > temp)
                {
                    k -= ph[i].first;
                    if(k < 0) break;
                    temp += k;
                }
                
            }

            if(ph[i].second > temp)
            {
                cout<<"NO\n";
                flag = false;
                break;
            }
        }

        if(flag) cout<<"YES\n";
    }       

    return 0;
}