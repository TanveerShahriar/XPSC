#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        set<int> a;
        for(int i = 0; i < n; i++)
        {
            int b;
            cin>>b;
            a.insert(b);
        }

        auto mx = a.rbegin();
        int res = *mx;
        a.erase(*mx);
        res += *a.rbegin();

        cout<<res<<"\n";
    }

    return 0;
}