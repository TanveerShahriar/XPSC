#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>>a[i];

        sort(a.begin(), a.end());
        
        int res = 0;
        for(int i = 0; i < n/2; i++) res += a[n-i-1] - a[i];
        cout<<res<<"\n";
    }

    return 0;
}