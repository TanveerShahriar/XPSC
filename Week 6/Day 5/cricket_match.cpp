#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        if (36 * m >= n) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }

    return 0;
}