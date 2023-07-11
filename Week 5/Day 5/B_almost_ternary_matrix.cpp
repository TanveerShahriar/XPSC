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
        int n, m;
        cin >> n >> m;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if((i % 4 == 0 || i % 4 == 3) && (j % 4 == 0 || j % 4 == 3))
                {
                    cout << 1 << " ";
                }
                else if((i % 4 == 1 || i % 4 == 2) && (j % 4 == 1 || j % 4 == 2))
                {
                    cout << 1 << " ";
                }
                else cout<< 0 << " ";
            }
            cout<<'\n';
        }
    }       

    return 0;
}