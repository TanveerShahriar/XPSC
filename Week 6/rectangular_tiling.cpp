#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int a,b;
        cin>>a>>b;

        if((a + b) % 2 == 0 && a%2 != 0 && b%2 != 0) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }   

    return 0;
}