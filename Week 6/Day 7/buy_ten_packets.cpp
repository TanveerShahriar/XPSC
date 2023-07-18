#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int x,y;
        cin>>x>>y;

        cout<<min(5*x, 2*y+x)<<"\n";
    }

    return 0;
}