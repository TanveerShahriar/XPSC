#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        float n, m;
        cin>>n>>m;
        if(n < m / 10) cout<<"DINING";
        else if(m/10 < n) cout<<"ONLINE";
        else cout<<"EITHER";
        cout<<"\n";
    }   

    return 0;
}