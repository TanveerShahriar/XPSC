#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int sum = a+b+c;
        if(sum >= 2) cout<<"Not now";
        else cout<<"Water filling time";
        cout<<"\n";
    }   

    return 0;
}