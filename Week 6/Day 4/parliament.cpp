#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        float n,x;
        cin>>n>>x;

        if(x >= n / 2) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }   

    return 0;
}