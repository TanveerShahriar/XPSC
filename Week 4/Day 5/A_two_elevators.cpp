#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int x1 = abs(a-1), x2 = abs(c-b) + abs(c-1);
        if(x1<x2) cout<<1;
        else if(x1 == x2) cout<<3;
        else cout<<2;
        cout<<"\n";
    }

    return 0;
}